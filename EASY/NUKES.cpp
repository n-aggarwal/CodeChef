#include<bits/stdc++.h>

using namespace std;

int main()
{
     long a,k,n;
     cin>>a>>n>>k;

     int flag[k];

     long i,j,x,y;
     for(i=0;i<k;i++)
          flag[i]=0;

     for(i=0;i<a;i++)
     {
          if(flag[0]==n)
          {
               for(j=1;j<k;j++)
               {
                    if(flag[j]<n)
                         break;
               }
               for(x=1;x<j;x++)
                    flag[x]=0;

               flag[x]++;
               flag[0]=0;
          }
          else
               flag[0]++;
     }
     for(i=0;i<k;i++)
          cout<<flag[i]<<" ";
}
