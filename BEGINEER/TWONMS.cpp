#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          long a,b,n;
          cin>>a>>b>>n;

          if(n%2==0&&a>b)
               cout<<a/b;
          else if(n%2==0)
               cout<<b/a;
          else if(n%2==1)
          {
               a*=2;
               if(a>b)
                    cout<<a/b;
               else
                    cout<<b/a;
          }
          cout<<"\n";
     }
}
