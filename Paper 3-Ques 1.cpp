#include<bits/stdc++.h>
using namespace std;
void printu(int arr1[], int arr2[], int m, int n)
{
    cout<<"Union : ";
    set<int>s;
    for(int i=0;i<m;i++)
        s.insert(arr1[i]);
    for(int i=0;i<n;i++)
        s.insert(arr2[i]);
    for(auto i=s.begin();i!=s.end();i++)
        cout<<*i<<" ";
    cout<<endl;
}
void printi(int arr1[], int arr2[], int m, int n)
{
    cout<<"Intersection : ";
    set<int>s;
    for(int i=0;i<m;i++)
        s.insert(arr1[i]);
    for(int i=0;i<n;i++)
    {
        if(s.find(arr2[i])!=s.end())
            cout<<arr2[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr1[] = {1,3,4,5,7};
    int arr2[] = {2,3,5,6};
 
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
 

    printu(arr1,arr2,m,n);
    printi(arr1,arr2,m,n);
    return 0;
}