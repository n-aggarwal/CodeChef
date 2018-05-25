#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int n,min;
          cin>>n>>min;

          long maxprofit = 0;
          long a[n],b[n],i;

          for(i=0;i<n;i++)
          {
               cin>>a[i];
               a[i]=min/a[i];
          }
          for(i=0;i<n;i++)
          {
               cin>>b[i];
               if(a[i]*b[i]>maxprofit)
                    maxprofit = a[i]*b[i];
          }
          cout<<maxprofit<<"\n";
     }
}
