#include<bits/stdc++.h>

using namespace std;

int main()
{
     long n,i,j;
     scanf("%d",&n);
     long long sum=0;
     vector <long> s(n);

     for(i=0;i<n;i++)
          scanf("%lld",&s[i]);

     sort(s.begin(),s.end());

     for(i=0;i<n;i++)
     {
          sum+=(s[i]*i)-(s[i]*(n-1-i));
     }
     printf("%lld",sum);

}
