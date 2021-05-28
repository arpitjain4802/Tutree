#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
        
	int maxx=arr[n-1];
	vector<int>v;
	v.push_back(maxx);
	
	for (int i=n-2;i>=0;i--)
	{
		if(maxx<arr[i])
		{		
			maxx=arr[i];
			v.push_back(maxx);
		}
	}
	for(auto it=v.rbegin();it!=v.rend();it++)
	    cout<<*it<<" ";
	return 0;
}
