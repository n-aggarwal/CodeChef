#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int n,k;
          cin>>n>>k;
          int totalsum=0;
          int arr[n],i;
          for(i=0;i<n;i++)
          {
               cin>>arr[i];
               totalsum+=arr[i];
          }
          sort(arr,arr+n);
          int sum1=0;
          for(i=0;i<k;i++)
               sum1+=arr[i];
          int sum2=0;
          for(i=n-1;i>n-k-1;i--)
               sum2+=arr[i];
          //cout<<totalsum<<" "<<sum1<<" "<<sum2<<"\n";
          cout<<max(abs(totalsum-(2*sum1)),abs(totalsum-(2*sum2)))<<"\n";
     }
}
