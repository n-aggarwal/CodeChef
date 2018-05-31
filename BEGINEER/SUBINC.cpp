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

          long long count=0;
          int lastindex=0;
          for(i=1;i<n;i++)
          {
               if(arr[i-1]>arr[i])
               {
                    long long  n2 = i-lastindex;
                    count+= (n2*(n2+1))/2;
                    lastindex=i;
               }
          }
          long long n2 = i-lastindex;
          count+= (n2*(n2+1))/2;
          lastindex=i;

          cout<<count<<"\n";
     }
}
