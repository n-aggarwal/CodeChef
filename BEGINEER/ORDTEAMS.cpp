#include<bits/stdc++.h>

using namespace std;

bool xbetterthany(int x[],int y[])
{
     //assume x is better
     int i;
     for(i=0;i<3;i++)
     {
          if(x[i]<y[i])
               break;
     }
     if(i==3)
     {
          if((x[0]!=y[0])||(x[1]!=y[1])||x[2]!=y[2])
               return true;
          return false;
     }
     return false;
}

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int s1[3],s2[3],s3[3];

          for(int i=0;i<3;i++)
               cin>>s1[i];

          for(int i=0;i<3;i++)
               cin>>s2[i];

          for(int i=0;i<3;i++)
               cin>>s3[i];

          if(xbetterthany(s1,s2)&&xbetterthany(s1,s3))
          {
               if(xbetterthany(s2,s3))
                    cout<<"yes\n";
               else if(xbetterthany(s3,s2))
                    cout<<"yes\n";
               else
                    cout<<"no\n";
          }
          else if(xbetterthany(s2,s1)&&xbetterthany(s2,s3))
          {
               if(xbetterthany(s1,s3))
                    cout<<"yes\n";
               else if(xbetterthany(s3,s1))
                    cout<<"yes\n";
               else
                    cout<<"no\n";
          }
          else if(xbetterthany(s3,s1)&&xbetterthany(s3,s2))
          {
               if(xbetterthany(s1,s2))
                    cout<<"yes\n";
               else if(xbetterthany(s2,s1))
                    cout<<"yes\n";
               else
                    cout<<"no\n";
          }
          else
               cout<<"no\n";
     }
}
