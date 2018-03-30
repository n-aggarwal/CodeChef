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

          long arr[n],i;
          long gcd;
          for(i=0;i<n;i++)
          {
               cin>>arr[i];
               if(i==0)
                    gcd=arr[0];
               else
                    gcd =__gcd(gcd,arr[i]);
          }

          cout<<gcd<<"\n";
     }
}
