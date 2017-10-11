#include<bits/stdc++.h>

using namespace std;

int subset(int a[],int n,int su)
{
     int flag[n],i,j=0,k=0,x,y,z;

     for(i=0;i<n;i++)
          flag[i]=0;

     for(i=0;i<pow(2,n);i++)
     {    int sum=0;
          if(flag[0]==1)
          {
               for(k=1;k<n;k++)
               {
                    if(flag[k]==0)
                         break;
               }
               for(x=1;x<k;x++)
                    flag[x]=0;
               flag[x]=1;

               flag[0]=0;
          }
          else
               flag[0]++;

          for(x=0;x<n;x++)
          {
               if(flag[x]==1)
                    sum+=a[x];
          }
          if(sum==su)
               return 1;
     }
     return -1;
}

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int n;
          long m;
          cin>>n>>m;

          int a[n];
          int i;
          for(i=0;i<n;i++)
               cin>>a[i];

          if(subset(a,n,m)==1)
               cout<<"Yes\n";
          else
               cout<<"No\n";
     }
}
