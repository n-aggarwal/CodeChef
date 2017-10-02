#include<iostream>
#include<string.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          char s[100001];
          cin>>s;
          long n=strlen(s),i,j=0;

          for(i=0;i<n;i++)
          {
               if(s[i]=='>')
                    s[i]='<';
               else if(s[i]=='<')
                    s[i]='>';
          }
          for(i=0;i<n-1;i++)
          {
               if((s[i]=='>')&&(s[i+1]=='<'))
                    j++;
          }
          cout<<j<<"\n";
     }
}

