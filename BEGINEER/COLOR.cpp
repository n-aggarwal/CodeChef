#include<iostream>
#include<string.h>
#include<vector>

using namespace std;

int main()
{
     int t,i=0;
     cin>>t;

     while(i<t)
     {
          long int n;
          cin>>n;

          char s[100000];
          cin>>s;
          long int r=0,g=0,b=0;
          long int c=0,j=0;

          for(;j<n;j++)
          {
               if(s[j]=='R')
                    r++;
               else if(s[j]=='B')
                    b++;
               else if(s[j]=='G')
                    g++;
          }

          if((r>=b)&&(r>=g))
               c=b+g;
          else if((b>=r)&&(b>=g))
               c=r+g;
          else if((g>=r)&&(b>=b))
               c=r+b;

          cout<<c<<"\n";
          i++;
     }
}
