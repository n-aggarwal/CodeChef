#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int n,k;
          cin>>n;

          int i,j=0,z;
          long a[n+1];

          for(i=0;i<n;i++)
               cin>>a[i];
          cin>>k;
          z=a[k-1];

          sort(a,a+n);

          for(i=0;i<=n;i++)
          {
               if(z==a[i])
               {
                    j=i+1;
                    break;
               }
          }
          cout<<j<<"\n";

     }
}
