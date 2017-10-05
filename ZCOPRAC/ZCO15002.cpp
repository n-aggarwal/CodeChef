#include<bits/stdc++.h>

using namespace std;

long diff(long a,long b)
{
     if(a>b)
          return a-b;
     else
          return b-a;
}

int main()
{
     long int n;
     long k;
     scanf("%ld %ld",&n,&k);

     long int a[n];
     long i=0,count=0,j;

     for(;i<n;i++)
          scanf("%ld",&a[i]);

     sort(a,a+n);
     j=1;
     for(i=0;i<n-1&&i+j<n;)
     {
          if(diff(a[i],a[i+j])>=k)
          {
               count+=n-i-j;
               i++;
               j=1;
          }
             else
               j++;
     }
     cout<<count;
}
