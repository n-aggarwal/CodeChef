#include<bits/stdc++.h>

using namespace std;

int main()
{
     long n,i,k;
     cin>>n;

     long long count=0;

     for(i=0;i<n;i++)
     {
          cin>>k;
          count+=k;
     }
     if(count==n*(n+1)/2)
          cout<<"YES\n";
     else
          cout<<"NO\n";
}
