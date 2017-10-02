#include<iostream>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int n;
          cin>>n;
          int e=n;
          while(e>8)
               e-=8;
          switch(e)
          {
               case 1:   cout<<n+3<<"LB\n";
                         break;
               case 2:   cout<<n+3<<"MB\n";
                         break;
               case 3:   cout<<n+3<<"UB\n";
                         break;
               case 4:   cout<<n-3<<"LB\n";
                         break;
               case 5:   cout<<n-3<<"MB\n";
                         break;
               case 6:   cout<<n-3<<"UB\n";
                         break;
               case 7:   cout<<n+1<<"SU\n";
                         break;
               case 8:   cout<<n-1<<"SL\n";
                         break;

          }
     }
}
