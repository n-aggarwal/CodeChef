 #include<iostream>
#include<iomanip>

using namespace std;

int main()
{
     int w;
     float m;
     cin>>w;
     cin>>m;
     cout<<"\n";
     if((w%5==0)&&(m>=(w+0.5)))
     {
          m-=(w+0.5);
          cout<<setprecision(2)<<fixed<<m;
     }
     else
     {
          cout<<setprecision(2)<<fixed<<m;
     }

}
