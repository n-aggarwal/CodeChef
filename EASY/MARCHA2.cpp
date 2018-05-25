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
          bool flag=true;
          if(arr[0]>1)
          {
               cout<<"No\n";
               continue;
          }
          if(arr[0]==1&&n>1)
          {
               cout<<"No\n";
               continue;
          }
          if(arr[0]==1&&n==1)
          {
               cout<<"Yes\n";
               continue;
          }
          int nxtstem=2;
          for(i=1;i<n;i++)
          {
               //int maxl = nxtstemm;
               if(arr[i]>nxtstem)
               {
                    flag=false;
                    break;
               }
               nxtstem = 2*(nxtstem-arr[i]);
          }
          if(nxtstem!=0)
          {
               cout<<"No\n";
               continue;
          }
          if(flag)
               cout<<"Yes\n";
          else
               cout<<"No\n";
     }
}

