#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     int tk=0;
     while(++tk<=t)
     {
          int n,m;
          cin>>m>>n;
          int rx,ry;
          cin>>rx>>ry;

          int length;
          cin>>length;

          char str[10001];
          cin>>str;


          int xpos=0,ypos=0;

          for(int i=0;i<length;i++)
          {
               if(str[i]=='U')
                    ypos++;
               else if(str[i]=='D')
                    ypos--;
               else if(str[i]=='R')
                    xpos++;
               else
                    xpos--;
          }
          cout<<"Case "<<tk<<": ";
          if(xpos<0||ypos<0)
               cout<<"DANGER\n";
          else if(xpos>m||ypos>n)
               cout<<"DANGER\n";
          else if(xpos==rx&&ypos==ry)
               cout<<"REACHED\n";
          else
               cout<<"SOMEWHERE\n";
     }
}
