#include<iostream>
#include<string.h>
using namespace std;

int main()
{
     int t,i=0;
     cin>>t;

     while(i<t)
     {
          char a[1000],b[1000];

          cin>>a>>b;

          int flag=0,j;
          for(j=0;j<strlen(a);j++)
          {     for(int k=0;k<strlen(b);k++)
                {
               if(a[j]==b[k])
               {  flag=1;
                  break;
               }
                }
          if(flag==1)
               break;
          }
          if(flag==1)
               cout<<"Yes\n";
          else
               cout<<"No\n";
          i++;

     }
}
