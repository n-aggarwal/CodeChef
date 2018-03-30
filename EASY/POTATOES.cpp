#include<bits/stdc++.h>

using namespace std;

bool IsPrime(long n)
{
     long i=2;
     for(;i<=sqrt(n);i++)
          if(n%i==0)
          return false;
     return true;
}

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          long n1,n2;
          cin>>n1>>n2;
          long sum=n1+n2;

          if(sum%2==0)
          {
               long z=1;
               while(IsPrime(sum+z)==false)
                    z+=2;
               cout<<z<<"\n";
          }
          else
          {
               long z=2;
               while(IsPrime(sum+z)==false)
                    z+=2;
               cout<<z<<"\n";
          }
     }
}
