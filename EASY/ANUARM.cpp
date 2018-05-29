#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int n,m;
          cin>>n>>m;

          int arr[m],i;

          for(i=0;i<m;i++)
               cin>>arr[i];

          sort(arr,arr+m);

          int minm = arr[0],maxm= arr[m-1];


          for(i=0;i<n;i++)
               cout<<max(i-minm,maxm-i)<<" ";
          cout<<"\n";
     }
}
