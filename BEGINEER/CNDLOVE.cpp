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

          long ans=0;

          for(int i=0;i<n;i++)
          {
               int k;
               cin>>k;

               ans+=k;
          }
          if(ans%2==0)
               cout<<"NO\n";
          else
               cout<<"YES\n";
     }
}
