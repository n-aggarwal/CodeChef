#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          long x,y;
          cin>>x>>y;

          long gcd = __gcd(x,y);

          cout<<2*gcd<<"\n";
     }
}
