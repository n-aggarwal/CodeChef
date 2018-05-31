#include<bits/stdc++.h>
#include <boost/math/common_factor.hpp>
using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int n;
          cin>>n;

          long arr[n];
          for(int i=0;i<n;i++)
               cin>>arr[i];

          sort(arr,arr+n);
          long lcm = boost::math::lcm(arr[0],arr[1]);

          for(int i=0;i<n-1;i++)
          {
               for(int j=i+1;j<n;j++)
               {
                    if(boost::math::lcm(arr[i],arr[j])<lcm)
                         lcm = boost::math::lcm(arr[i],arr[j]);
               }
          }
          cout<<lcm<<"\n";
     }
}
