#include<iostream>
#include<vector>
#include<string.h>

struct c
{
     char s[10];
};

using namespace std;

int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          int n,i;
          cin>>n;
          int flag=1;

          vector <c> s(n);
          for(i=0;i<n;i++)
               cin>>s[i].s;

          if(n==1)
          {
               if(strcmp(s[0].s,"cookie")==0)
                    cout<<"NO\n";
               else
                    cout<<"YES\n";
          }
          else
          {
          for(i=0;i<n-1;i++)
          {
               if(strcmp(s[i].s,"cookie")==0)
               {
                    if(strcmp(s[i+1].s,"cookie")==0)
                    {
                         flag=0;
                         break;
                    }
               }
          }
          if((flag==1)&&(strcmp(s[n-1].s,"cookie")!=0))
               cout<<"YES\n";
          else
               cout<<"NO\n";
          }

     }
}
