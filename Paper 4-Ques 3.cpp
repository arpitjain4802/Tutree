#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

	int x,y;
	cin>>x>>y;

    int var=-1, minn=INT_MAX;
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x || arr[i]==y)
		{
			if(var!=-1 && arr[i]!=arr[var])
				minn=min(minn,i-var);
			
			var=i;
		}
	}
	if(minn==INT_MAX)
		cout<<-1;
	cout<<minn<<endl;
	return 0;
}