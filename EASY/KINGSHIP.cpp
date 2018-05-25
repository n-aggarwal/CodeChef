#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int n;
          cin>>n;

          long arr[n],i;
          for(i=0;i<n;i++)
               cin>>arr[i];
          sort(arr,arr+n);

          long long ans=0;

          for(i=1;i<n;i++)
               ans+=arr[i]*arr[0];
          cout<<ans<<"\n";

     }
}
