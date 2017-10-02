#include<iostream>
#include<string.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int n;
          cin>>n;
          char ch[20],s[20];
          cin>>s;
          long count=0,i;

          for(i=0;i<n;i++)
          {
               cin>>ch;
               if(strcmp(ch,"CONTEST_WON")==0)
               {
                    int k;
                    cin>>k;
                    if(k<20)
                         count+=300+20-k;
                    else
                         count+=300;
               }
               else if(strcmp(ch,"TOP_CONTRIBUTOR")==0)
                    count+=300;
               else if(strcmp(ch,"BUG_FOUND")==0)
               {
                    int k;
                    cin>>k;
                    count+=k;
               }
               else if(strcmp(ch,"CONTEST_HOSTED")==0)
                    count+=50;
          }
          if(strcmp(s,"INDIAN")==0)
          {
               int d=count/200;
               cout<<d<<"\n";
          }
          else
          {
               int d=count/400;
               cout<<d<<"\n";
          }


     }
}
