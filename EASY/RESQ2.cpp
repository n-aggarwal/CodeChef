#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          long n;
          cin>>n;
          int L=sqrt(n);
          while(true)
          {
               if(n%L==0)
                    break;
               L--;
          }
          int B=n/L;
          cout<<abs(L-B)<<"\n";
     }
}
