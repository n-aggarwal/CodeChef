#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long a,n=0;
     cin>>a;
     int k=1;
     a=a%6;
     while(n<=a)
     {
          if(n==a)
          {
               cout<<"yes";
               return 0;
          }
          if(k>3)
               k=1;
          n+=k;
          k++;
     }
     cout<<"no";
     return 0;
}
