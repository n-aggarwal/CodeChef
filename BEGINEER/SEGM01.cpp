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
          long a=0,b=0,i,flag=1,c=0;
          long n=s.length();

          for(i=0;i<n;i++)
          {
               if(s[i]=='1')
                    a++;
               else
                    b++;
          }
          for(i=0;i<n;i++)
          {
               if(s[i]=='1')
                    {
                         flag=0;
                         c++;
                    }
               if(s[i]=='0'&&flag==0)
                    break;
          }
          if(c==a&&a>0)
               cout<<"YES\n";
          else
               cout<<"NO\n";
     }
}
