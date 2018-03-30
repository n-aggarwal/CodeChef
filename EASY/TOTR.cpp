#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     string s;
     cin>>s;

     while(t--)
     {
          string str;
          cin>>str;

          for(int i=0;i<str.length();i++)
          {
               if(str[i]=='_')
                    cout<<" ";
               else if(str[i]=='.'||str[i]=='!'||str[i]=='?'||str[i]==',')
                    cout<<str[i];
               else if(str[i]-'a'>=0)
                    cout<<s[str[i]-'a'];
               else
               {
                    char ch=toupper(s[str[i]-'A']);
                    cout<<ch;
               }
          }
          cout<<"\n";
     }
}
