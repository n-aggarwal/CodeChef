#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int n,m;
          cin>>n>>m;

          vector <int> c(n-m);
          vector <int> a(n-m);
          vector <int> flag(n+1);

          int i,j,k,d=1;

          for(i=0;i<m;i++)
               {
                    scanf("%i",&k);
                    flag[k]=1;
               }
          k=0;j=0;
          for(i=1;i<=n;i++)
          {
               if(flag[i]==0&&d==1)
               {
                    c[k++]=i;
                    d=2;
               }
               else if(flag[i]==0&&d==2)
               {
                    a[j++]=i;
                    d=1;
               }
          }
          for(i=0;i<k;i++)
               cout<<c[i]<<" ";
          cout<<"\n";
          for(i=0;i<j;i++)
               cout<<a[i]<<" ";
          cout<<"\n";
     }
}
