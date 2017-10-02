#include<iostream>
#include<vector>
#include<string.h>

using namespace std;

int main()
{
     int t,i=0;
     cin>>t;

     while(i<t)
     {
          int n ,k,j=0;
          cin>>n>>k;
          vector <int> ans(n);
          for(;j<n;j++)
               ans[i]=0;
          char ch[100][50],ch1[50];

          for(j=0;j<n;j++)
               cin>>ch[j];

          for(int dz=0;dz<k;dz++)
          {
               int l;
          cin>>l;
          for(j=0;j<l;j++)
          {
               cin>>ch1;
               for(int z=0;z<n;z++)
               {
                    if(strcmp(ch1,ch[z])==0)
                    {
                         ans[z]=1;
                         break;
                    }
               }
          }
          }

          for(j=0;j<n;j++)
          {
               if(ans[j]==0)
                    cout<<"NO ";
               else
                    cout<<"YES ";
          }
          cout<<"\n";
          i++;
     }
}
