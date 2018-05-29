#include<bits/stdc++.h>

using namespace std;

bool check(int arr[],int repo,int n,int sum,int isum)
{
     if(sum==isum)
          return true;
     if(repo==n)
          return false;

     if(check(arr,repo+1,n,sum,isum+arr[repo]))
          return true;
     return check(arr,repo+1,n,sum,isum);
}

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int n,m;
          cin>>n>>m;

          int arr[n],i;

          for(i=0;i<n;i++)
               cin>>arr[i];

          if(check(arr,0,n,m,0))
               cout<<"Yes\n";
          else
               cout<<"No\n";
     }
}
