#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          string str;
          cin>>str;

          int a=0,b=0;
          char lc='c';
          int buffer=0;

          for(int i=0;i<str.length();i++)
          {
               if(str[i]=='.')
               {
                    buffer++;
               }
               if(str[i]=='A'&&lc=='A')
               {
                    a+=1+buffer;
                    buffer=0;
                    lc='A';
               }
               else if(str[i]=='A')
               {
                    a++;
                    lc='A';
                    buffer=0;
               }
               if(str[i]=='B'&&lc=='B')
               {
                    b+=1+buffer;
                    buffer=0;
                    lc='B';
               }
               else if(str[i]=='B')
               {
                    b++;
                    lc='B';
                    buffer=0;
               }
          }
          cout<<a<<" "<<b<<"\n";
     }
}
