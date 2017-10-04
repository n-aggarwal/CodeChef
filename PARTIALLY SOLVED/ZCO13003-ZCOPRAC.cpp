#include<bits/stdc++.h>

using namespace std;

int main()
{
     long n,h;
     scanf("%ld %ld",&n,&h);

     long a[n];

     long i,j,k=0;

     for(i=0;i<n;i++)
          scanf("%ld",&a[i]);

     for(i=0;i<n;i++)
          for(j=i+1;j<n;j++)
     {
          if(a[i]+a[j]<h)
               k++;
     }
     printf("%ld",k);

}
