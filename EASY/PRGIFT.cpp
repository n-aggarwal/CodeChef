#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int n,k;
          cin>>n>>k;
          int i=0;
          int count=0;
          int countodd=0;
          for(i=0;i<n;i++)
          {
               int hg;
               cin>>hg;
               if(hg%2==0)
                    count++;
               else
                    countodd++;
          }
          if(k==0&&countodd==0)
               cout<<"NO\n";
          else if(k==0)
               cout<<"YES\n";
          else if(count>=k)
               cout<<"YES\n";
          else
               cout<<"NO\n";
     }
}
