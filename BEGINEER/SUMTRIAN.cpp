#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int n;
          cin>>n;

          int a[n][n];
          int i=0,j=0;
          //long sum=0;

          for(i=0;i<n;i++)
          {
               for(j=0;j<=i;j++)
                    cin>>a[i][j];
          }
          int k=n-1;
          for(i=n-2;i>=0;i--)
          {
               for(j=0;j<=k;j++)
               {
                    int s1= a[i][j]+a[i+1][j];
                    int s2 = a[i][j]+a[i+1][j+1];
                    a[i][j]=max(s1,s2);
               }
               k--;
          }
          cout<<a[0][0]<<"\n";
     }
}
