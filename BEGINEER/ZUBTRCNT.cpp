#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;
     int rt=0;
     while(++rt<=t)
     {
          int l,k;
          cin>>l>>k;

          if(k>l)
               cout<<"Case "<<rt<<": 0\n";
          else
          {
               l=l-k+1;
               cout<<"Case "<<rt<<": "<<(l*(l+1))/2<<"\n";
          }
     }
}
