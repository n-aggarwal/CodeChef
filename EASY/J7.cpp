#include<bits/stdc++.h>
#include<iomanip>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          double p,s,i,j,k,x,y;
          cin>>p>>s;

          i=(p*p)-(24*s);
          j=(p+sqrt(i))/12;
          k=(p-sqrt(i))/12;

          if(j<k)
          {    y=j;
               x=(p-(8*y))/4;
          }
          else
          {
               y=k;
               x=(p-(8*y))/4;
          }

          cout<<fixed<<setprecision(2)<<x*y*y<<"\n";
     }
}
