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
               long num;
               cin>>num;
               num*=2;
               ans = ans^num;
          }
          cout<<ans<<"\n";
     }
}
