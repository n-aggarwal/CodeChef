#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          long long l,d,s,c;
          cin>>l>>d>>s>>c;

          if(l<=s)
          {
               cout<<"ALIVE AND KICKING\n";
               continue;
          }
          long long i;
          for(i=2;i<=d;i++)
          {
               s = s+ c*s;
               if(l<=s)
                    break;
          }

          if(i<=d)
               cout<<"ALIVE AND KICKING\n";
          else
               cout<<"DEAD AND ROTTING\n";
     }
}
