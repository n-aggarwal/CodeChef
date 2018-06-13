#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          long n,k;
          cin>>n>>k;

          int count=0;

          while(n--)
          {
               long dj;
               cin>>dj;
               if((dj+k)%7==0)
                    count++;
          }
          cout<<count<<"\n";
     }
}
