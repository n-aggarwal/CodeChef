#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          long n,i=0;
          cin>>n;

          int a[n];

          for(i=0;i<n;i++)
               cin>>a[i];

          long to=0;
          for(i=0;i<n;i++)
               {
                    if(a[i]==0)
                         break;
               }
          to=100*(n-i);
          for(i=0;i<n;i++)
               {
                    if(a[i]==0)
                         to+=1000;
               }
          cout<<to<<"\n";
     }
}
