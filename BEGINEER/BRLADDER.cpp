#include<iostream>
#define ll long long int

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          ll a,b;
          cin>>a>>b;

          if(a%2==0&&b==a+1)
               cout<<"NO\n";
          else if((b-a>2)||(a-b>2))
               cout<<"NO\n";
          else if(b%2==0&&a==b+1)
               cout<<"NO\n";
          else
               cout<<"YES\n";
     }
}
