#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int n,i;
          cin>>n;

          int arr[n];
          int min=INT_MAX;

          for(i=0;i<n;i++)
          {
               cin>>arr[i];
               if(min>arr[i])
                    min=arr[i];
          }
          for(i=0;i<n;i++)
          {
               if(min==arr[i])
                    break;
          }
          cout<<i+1<<"\n";
     }
}
