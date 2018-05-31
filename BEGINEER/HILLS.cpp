#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          long n,u,d;
          cin>>n>>u>>d;


          long arr[n+1];

          for(long i=1;i<=n;i++)
               cin>>arr[i];

          long i=0;
          bool chance = true;
          for(i=1;i<n;i++)
          {
               if(arr[i]<arr[i+1])
               {
                    if(arr[i+1]-arr[i]>u)
                         break;
               }
               else if(arr[i]>arr[i+1])
               {
                    if(arr[i]-arr[i+1]>d&&chance==false)
                         break;
                    else if(arr[i]-arr[i+1]>d)
                    {
                         chance=false;
                    }
               }
          }
          cout<<i<<"\n";
     }
}
