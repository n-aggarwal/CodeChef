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

          int arr[n],i;
          for(i=0;i<n;i++)
               cin>>arr[i];
          sort(arr,arr+n);

          long count=0;

          for(i=n-1;i>=0;i-=2)
               count+=arr[i];
          cout<<count<<"\n";
     }
}
