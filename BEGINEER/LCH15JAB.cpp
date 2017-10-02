#include<iostream>
#include<string.h>

using namespace std;

int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          char s[100];
          int ch[26];
          cin>>s;

          int i,j,k;
          for(i=0;i<26;i++)
               ch[i]=0;

          for(i=0;i<strlen(s);i++)
          {
               ch[s[i]-'a']++;
          }
          int flag=0;
          for(i=0;i<26;i++)
          {
               if(strlen(s)-ch[i]==ch[i])
               {
                    flag=1;
                    break;
               }
          }
          if(flag==1)
               cout<<"YES\n";
          else
               cout<<"NO\n";

     }
}
