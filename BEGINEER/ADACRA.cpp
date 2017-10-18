#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          char c[51];
          cin>>c;

          int flag=0,i,u=0,d=0;

          for(i=0;i<strlen(c);i++)
          {
               if(c[i]=='U')
               {
                    flag=1;
               }
               else if(flag==1)
               {
                    u++;
                    flag=0;
               }
          }
          if(flag==1)
               u++;
          flag=0;
          for(i=0;i<strlen(c);i++)
          {
               if(c[i]=='D')
               {
                    flag=1;
               }
               else if(flag==1)
               {
                    d++;
                    flag=0;
               }
          }
          if(flag==1)
               d++;
          if(u>d)
               cout<<d<<"\n";
          else
               cout<<u<<"\n";
     }
}
