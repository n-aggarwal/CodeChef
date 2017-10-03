#include<bits/stdc++.h>

using namespace std;

int main()
{
     unsigned int n;
     long k;
     cin>>n>>k;

     long int a[n];
     long i=0,count=0,j;

     for(;i<n;i++)
          a[i]=1;

     for(i=0;i<n;i++)
     {
          for(j=i;j<n;j++)
          {
               if(a[i]>a[j]&&a[i]-a[j]>=k)
                    count++;
               else if(a[i]<a[j]&&a[j]-a[i]>=k)
                    count++;
          }
     }
     cout<<count<<"\n";
}
