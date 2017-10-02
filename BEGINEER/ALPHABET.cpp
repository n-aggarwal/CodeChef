#include<iostream>
#include<string.h>
#include<vector>

using namespace std;

int main()
{
     char d[26],s[12];
     cin>>d;
     int l1=strlen(d);
     int n;
     cin>>n;
     vector <int> flagv(n);
     int i,j,k,l;
     for(i=0;i<n;i++)
     {
          cin>>s;
          int flag=0;
          l=strlen(s);
          for(k=0;k<l;k++)
          {
               for(j=0;j<l1;j++)
               {
                    if(d[j]==s[k])
                         break;
               }
               if(j==l1)
               {
                    flag=1;
                    break;
               }
          }
          if(flag==1)
               flagv[i]=0;
          else
               flagv[i]=1;
     }
     for(i=0;i<n;i++)
     {
          if(flagv[i]==1)
               cout<<"Yes\n";
          else
               cout<<"No\n";
     }

}
