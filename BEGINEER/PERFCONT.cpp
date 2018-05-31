#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int n;
          long p;
          cin>>n>>p;

          long a[n];
          int i=0;
          for(;i<n;i++)
               cin>>a[i];
               int e=0,h=0;
               for(i=0;i<n;i++)
               {
                    if(a[i]>=p/2)
                         e++;
                    else if(a[i]<=p/10)
                         h++;
               }
               if(e==1&&h==2)
                    cout<<"yes\n";
               else
                    cout<<"no\n";

     }
}
