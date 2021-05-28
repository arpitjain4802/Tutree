#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    double arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
	
	priority_queue<double> temp;
	priority_queue<double,vector<double>,greater<double>> ans;

	double m=arr[0];
	temp.push(arr[0]);
	cout<<m<<" ";
	
	for (int i=1;i<n;i++)
	{
		double var=arr[i];
		if (temp.size()>ans.size())
		{
			if (var<m)
			{
				ans.push(temp.top());
				temp.pop();
				temp.push(var);
			}
			else
				ans.push(var);

			m=(temp.top()+ans.top())/2.0;
		}
		else if (temp.size()==ans.size())
		{
			if (var<m)
			{
				temp.push(var);
				m=(double)temp.top();
			}
			else
			{
				ans.push(var);
				m=(double)ans.top();
			}
		}
		else
		{
			if (var>m)
			{
				temp.push(ans.top());
				ans.pop();
				ans.push(var);
			}
			else
				temp.push(var);

			m=(temp.top()+ans.top())/2.0;
		}
		cout<<m<<" ";
	}
	return 0;
}
