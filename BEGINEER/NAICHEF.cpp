#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int n,a,b;
          cin>>n>>a>>b;

          int ao=0,bo=0;
          for(int i=0;i<n;i++)
          {
               int k;
               cin>>k;

               if(k==a)
                    ao++;

               if(k==b)
                    bo++;
          }
          double ans =(double)(ao*bo)/(n*n);
          cout<<fixed<<setprecision(10)<<ans<<"\n";
     }
}
