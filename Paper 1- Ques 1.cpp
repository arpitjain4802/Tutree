#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    if (n==0 || n==1 )
    {
        cout<<"Invalid Input";
        return 0;
    }
 
    int l=INT_MAX, sl=INT_MAX;
    
    for (int i=0;i<n;i++)
    {
        if (arr[i]<l)
        {
            sl=l;
            l=arr[i];
        }
        else if(arr[i]<sl && arr[i]!=l)
            sl=arr[i];
    }
    if(sl==INT_MAX)
        cout << "Second smallest element is not present"<<endl;
    else
        cout << "The smallest element is " <<l<<" and second Smallest element is " <<sl<< endl;

    return 0;
}