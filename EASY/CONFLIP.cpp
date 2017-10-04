#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          long i,n,q,g;
          cin>>g;

          while(g--)
          {
               cin>>i>>n>>q;
               if(n%2==0&&i==1)
                    cout<<n/2<<"\n";
               else if(n%2==1&&q==1&&i==1)
                    cout<<(n-1)/2<<"\n";
               else if(n%2==1&&q==2&&i==1)
                    cout<<(n+1)/2<<"\n";
               else if(i==2&&n%2==0)
                    cout<<n/2<<"\n";
               else if(n%2==1&&q==1)
                    cout<<(n+1)/2<<"\n";
               else
                    cout<<(n-1)/2<<"\n";

          }
     }
}
