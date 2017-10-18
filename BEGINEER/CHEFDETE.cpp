#include<bits/stdc++.h>

using namespace std;

int main()
{
     long n,i,j;
     cin>>n;
     long a[n+1],flag[n+1];
     for(i=0;i<=n;i++)
          flag[i]=0;

     for(i=1;i<=n;i++)
          {
               cin>>j;
               flag[j]++;
          }


     for(i=0;i<=n;i++)
     {
          if(flag[i]==0)
               cout<<i<<" ";
     }
}
