#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          long i,j;

          cin>>i>>j;

          long count=0;

          while(i!=j)
          {
               if(i>j)
               {
                    i/=2;
                    count++;
               }
               else
               {
                    j/=2;
                    count++;
               }
          }
          cout<<count<<"\n";
     }
}
