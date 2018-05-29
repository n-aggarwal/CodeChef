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

          long arr[n];

          for(i=0;i<n;i++)
               cin>>arr[i];
          long diff=0,min=arr[0];

          for(i=1;i<n;i++)
          {
               if(min>arr[i])
                    min=arr[i];
               else if(arr[i]-min>diff)
                    diff = arr[i]-min;
          }
          if(diff==0)
               cout<<"UNFIT\n";
          else
               cout<<diff<<"\n";
     }
}
