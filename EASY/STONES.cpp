#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          char s[100],j[100];
          cin>>s>>j;

          int ls=strlen(s),lj=strlen(j);

          int i,k,count=0;
          for(i=0;i<lj;i++)
          {
               for(k=0;k<ls;k++)
               {
                    if(j[i]==s[k])
                         {
                              count++;
                              break;
                         }
               }
          }
          cout<<count<<"\n";
     }
}
