#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long t;
     cin>>t;

     while(t--)
     {
          long long n,m;
          cin>>n>>m;

          long long arr[n],i;
          for(i=0;i<n;i++)
               cin>>arr[i];

          sort(arr,arr+n);

          long long minplates=0;
          long long currentpacked=0;
          for(i=n-1;i>=0;i--)
          {
               if(currentpacked>=m)
                    break;
               currentpacked+=arr[i];
               minplates++;
          }
          if(currentpacked<m)
               cout<<"-1\n";
          else
               cout<<minplates<<"\n";
     }
}
