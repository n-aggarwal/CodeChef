#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int n,i,j;
          cin>>n;

          long arr[n];
          for(i=0;i<n;i++)
               cin>>arr[i];
          long ans=0;
          long long mul,count=0;
          for(i=0;i<n;i++)
          {
               for(j=i;j<n;j++)
               {
                    count=0;
                    mul=1;
                    for(int k=i;k<=j;k++)
                    {
                         count+=arr[k];
                         mul*=arr[k];
                    }
                    if(count==mul)
                         ans++;
               }
          }
          cout<<ans<<"\n";
     }
}
