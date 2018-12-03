#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long int fib(long int n)
{
    if(n==0)return 0;
    else if(n==1) return 1;
    else return fib(n-1)+fib(n-2);
}
int main()
{
    long int n=0,sum=0;
    cout<<"Enter the N value:";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<fib(i)<<endl;
        sum+=fib(i);
    }
    cout<<"Sum of fibo series of range "<<n<< " is "<<sum;
    return 0;
}
