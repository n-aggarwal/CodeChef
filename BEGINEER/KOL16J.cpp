#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int n,i,j,k;
          cin>>n;

          int a[n],max=0;

          for(i=0;i<n;i++)
          {
               cin>>a[i];
               if(a[i]>max)
                    max=a[i];
          }
          if(max!=n)
          {
               cout<<"no\n";
               continue;
          }
          int flag[max+1];
          for(i=0;i<=max;i++)
               flag[i]=0;
          for(i=0;i<n;i++)
               flag[a[i]]++;
          for(i=1;i<=max;i++)
          {
               if(flag[i]!=1)
                    break;
          }
          if(i!=max+1)
          {
               cout<<"no\n";
               continue;
          }
          for(i=1;i<n;i++)
          {
               if(a[i]!=a[i-1]+1)
                    break;
          }
          if(i==n)
               cout<<"no\n";
          else
               cout<<"yes\n";
     }
}
