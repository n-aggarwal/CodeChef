#include<bits/stdc++.h>
using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          string s;
          cin>>s;
          long flag=0,i;
          if(s.length()>2)
          {

               for(i=0;i<s.length()-2;i++)
               {
                    if(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='1')
                    {
                         flag=1;
                         break;
                    }

                    if(s[i]=='0'&&s[i+1]=='1'&&s[i+2]=='0')
                    {
                         flag=1;
                         break;
                    }

               }
          }
          if(flag==1)
               cout<<"Good\n";
          else
               cout<<"Bad\n";
     }
}
