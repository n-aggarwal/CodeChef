#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int n,k,i;
          cin>>n>>k;

          int a[n];

          for(i=0;i<n;i++)
               cin>>a[i];

          sort(a,a+n);

          cout<<a[(n+k-1)/2]<<"\n";

     }
}
