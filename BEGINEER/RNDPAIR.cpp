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
          for(i=0;i<n;i++)
               cin>>arr[i];

          sort(arr,arr+n);

          int maxsum = arr[n-1]+arr[n-2];

          int count=0,ultracount=0;

          for(i=0;i<n-1;i++)
          {
               for(int j=i+1;j<n;j++)
               {
                    ultracount++;
                    if(arr[i]+arr[j]==maxsum)
                         count++;
               }
          }
          cout<<fixed<<setprecision(8)<<(double)count/ultracount<<"\n";
     }
}
