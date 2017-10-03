#include<iostream>
#include<string.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          char ch[100000];
          cin>>ch;

          long l=strlen(ch);
          long i;
          int flag=0,count1=0,count2=0;
          for(i=0;i<l;i++)
          {
               if(ch[i]=='1')
               {
                    flag=1;
                    break;
               }
          }

          if(flag==0)
          {
               cout<<"NO\n";
          }
          else
          {    flag=0;
               for(i=0;i<l-1;i++)
          {
               if(ch[i]=='1')
                    count1++;
          }
          for(i=0;i<l-1;i++)
          {
               if(ch[i]=='1')
                    {
                         flag=1;
                         count2++;
                    }
               else if(ch[i]=='0'&&flag==1)
                    {
                    break;
                    }
          }
          if(count1==count2)
          {
               cout<<"YES\n";
          }
          else
               cout<<"NO\n";
          }
     }
}
