#include <bits/stdc++.h>
using namespace std;

bool compare(int x, int y)
{
	return abs(x)<abs(y);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
	sort(arr,arr + n,compare);
	int minn=INT_MAX, a, b;
	for(int i=1;i<n;i++)
	{
		if (abs(arr[i-1]+arr[i])<=minn)
		{
			minn = abs(arr[i-1]+arr[i]);
			a=i-1;
			b=i;
		}
	}
	cout << "The two elements are "<<arr[a]<<" and "<<arr[b];
	return 0;
}
