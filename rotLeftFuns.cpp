#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   vector<int>a;
   int n=0,numrot=0,x=0;
   cin>>n>>numrot;

   for(int i=0;i<n;i++)
   {
       cin>>x;
       a.push_back(x);
   }
   rotate(a.begin(),a.begin()+numrot,a.end());
    for(int j=0;j<a.size() ; ++j)
   cout<<a[j]<<" ";


   return 0;
}
