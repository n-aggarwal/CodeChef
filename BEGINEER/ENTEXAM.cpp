#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int n,k,e;
          long m;

          cin>>n>>k>>e>>m;

          long long arr[n]={};

          for(int i=0;i<n-1;i++)
          {
               for(int j=0;j<e;j++)
               {
                    long h;
                    cin>>h;

                    arr[i]+=h;
               }
          }
          for(int j=0;j<e-1;j++)
          {
               long h;
               cin>>h;

               arr[n-1]+=h;
          }
          sort(arr,arr+n-1);
          long minnum=arr[n-k-1];

          //cout<<minnum<<"\n";
          if(minnum<arr[n-1])
               cout<<"0\n";
          else
          {
               long as = minnum-arr[n-1]+1;
               if(as<=m)
                    cout<<as<<"\n";
               else
                    cout<<"Impossible\n";
          }

     }
}
