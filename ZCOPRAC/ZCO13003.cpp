#include<bits/stdc++.h>

using namespace std;


int main()
{
     long n,h;
     cin>>n>>h;

     long a[n];

     long i,count=0,j=n-1;

     for(i=0;i<n;i++)
          cin>>a[i];

     sort(a,a+n);

     for(i=0;i<n&&j>i;)
     {
          if(a[i]+a[j]<h)
          {
               count+=j-i;
               i++;
               j=n-1;
          }
          else
               j--;

     }
     cout<<count;


}
