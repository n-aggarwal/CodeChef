#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          double s,sg,fg,d,t;
          cin>>s>>sg>>fg>>d>>t;

          double speed = (d*180)/t;
          speed +=s;

          if(abs(speed-sg)>abs(speed-fg))
               cout<<"FATHER\n";
          else if(abs(speed-sg)<abs(speed-fg))
               cout<<"SEBI\n";
          else
               cout<<"DRAW\n";
     }
}
