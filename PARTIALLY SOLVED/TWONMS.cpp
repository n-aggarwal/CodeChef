#include<iostream>

using namespace std;

long long int max(long long int a,long long int b)
{
     if(a>b)
          return a;
     else
          return b;
}
long long int min(long long int a,long long int b)
{
     if(a<b)
          return a;
     else
          return b;
}

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          long long int a,b,n,i,j,k;
          cin>>a>>b>>n;
          if(n==1)
               a*=2;
          else if(n%2==1)
          {
               for(i=0;i<n;i+=2)
               {
                    a*=2;
                    b*=2;
               }
               a*=2;
          }
          else
          {
               for(i=0;i<n;i+=2)
               {
                    a*=2;
                    b*=2;
               }

          }
          cout<<max(a,b)/min(a,b)<<"\n";
     }
}
