#include<iostream>
#include<string.h>
#include<vector>

using namespace std;

struct var
{
     char a[50];
};
int main()
{
     int t,i=0;
     cin>>t;

     while(i<t)
     {
          int n,j=0;
          cin>>n;

          vector <var> s(n);
          vector <var> d(n);
          vector <int> flag(n);
          for(;j<n;j++)
               {
                    cin>>s[j].a>>d[j].a;
                    flag[j]=0;
               }
          int x,z;
          for(j=0;j<n;j++)
               {
                    for(z=0;z<n;z++)
                    {
                         if(strcmp(s[j].a,d[z].a)==0)
                         {
                              flag[j]=1;
                              break;
                         }
                    }
               }
               for(z=0;z<n;z++)
               {
                    if(flag[z]==0)
                    {
                         x=z;
                         break;
                    }
               }
               for(j=0;j<n;j++)
               {
                    cout<<s[x].a<<"-"<<d[x].a<<" ";
                    for(z=0;z<n;z++)
                    {
                         if(strcmp(d[x].a,s[z].a)==0)
                         {
                              x=z;
                              break;
                         }
                    }
               }
               i++;
               cout<<"\n";
     }
}
