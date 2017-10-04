#include<bits/stdc++.h>

using namespace std;

long max(long a,long b)
{
     if(a>b)
          return a;
     else
          return b;
}
long min(long a,long b)
{
     if(a<b)
          return a;
     else
          return b;
}

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int n;
          cin>>n;
          long a[n];

          int i,j,mi=999999999;
          for(i=0;i<n;i++)
               cin>>a[i];

          for(i=0;i<n;i++)
          {
               for(j=i+1;j<n;j++)
               {
                         if(mi>max(a[i],a[j])-min(a[i],a[j]))
                              mi=max(a[i],a[j])-min(a[i],a[j]);
               }
          }
          cout<<mi<<"\n";

     }
}
