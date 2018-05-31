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

          if(n%5!=0)
               cout<<"-1\n";
          else
          {
               long turns=0;
               while(n%10!=0)
               {
                    n*=2;
                    turns++;
               }
               cout<<turns<<"\n";
          }
     }
}
