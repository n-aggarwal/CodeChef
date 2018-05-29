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

          int arr[n];

          for(int i=0;i<n;i++)
               cin>>arr[i];

          int gdc =arr[0];
          for(int i=1;i<n;i++)
          {
               gdc = __gcd(gdc,arr[i]);
          }
          if(gdc ==1)
               cout<<n<<"\n";
          else
               cout<<"-1\n";

     }
}

