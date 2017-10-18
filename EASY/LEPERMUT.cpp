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
          long a[n],i;
          for(i=0;i<n;i++)
               cin>>a[i];
          int j;

          long c1=0,c2=0;

          for(i=0;i<n-1;i++)
          {
               for(j=i+1;j<n;j++)
               {
                    if(a[i]>a[j])
                         c1++;
               }
               if(a[i]>a[i+1])
                    c2++;
          }
          if(c1==c2)
               cout<<"YES\n";
          else
               cout<<"NO\n";
     }
}
