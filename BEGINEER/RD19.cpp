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

          long arr[n];
          cin>>arr[0];
          long ans=arr[0];
          for(int i=1;i<n;i++)
          {
               cin>>arr[i];
               ans = __gcd(arr[i],ans);
          }
          if(ans==1)
               cout<<"0\n";
          else
               cout<<"-1\n";
     }
}
