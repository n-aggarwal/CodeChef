#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int  n;
          cin>>n;

          int arr[n],i;
          for(i=0;i<n;i++)
               cin>>arr[i];
          int ans=0;
          sort(arr,arr+n);
          long pre=arr[0];
          ans++;
          for(i=1;i<n;i++)
          {
               if(pre!=arr[i])
               {
                    ans++;
                    pre=arr[i];
               }
          }
          cout<<ans<<"\n";
     }
}
