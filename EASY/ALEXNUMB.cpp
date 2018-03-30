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
          long a[n];
          int i;

          for(i=0;i<n;i++)
               cin>>a[i];

          long cnt=0;
          i=n-1;
          while(i>=0)
          {
               cnt+=i;
               i--;
          }
          cout<<cnt<<"\n";
     }
}
