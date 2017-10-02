#include<iostream>
#include<string.h>

using namespace std;

int main()
{
     int t,i=0;
     cin>>t;

     while(i<t)
     {
          char s1[10],s2[10];
          cin>>s1>>s2;
          int flag=1;

          for(int j=0;j<strlen(s1);j++)
          {
               if((s1[j]!=s2[j])&&(s1[j]!='?')&&(s2[j]!='?'))
               {
                    flag=0;
                    break;
               }
          }
          if(flag==0)
          cout<<"No\n";
          else
               cout<<"Yes\n";
          i++;
     }
}
