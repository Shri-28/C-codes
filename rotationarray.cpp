#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],n=0,d=0;
    cin>>n>>d;
    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<d;i++)
    {
        int temp=a[0],j;
        for(j=0;j<n-1;j++)
        {
            a[j]=a[j+1];
        }
        a[j]=temp;
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        return 0;
}
