#include<bits/stdc++.h>

using namespace std;


int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int n,x;
          cin>>n>>x;

          int a[n];
          int i,sum=0;
          for(i=0;i<n;i++)
               {
                    cin>>a[i];
                    sum+=a[i];
               }
          if(sum%x==0)
          {
               cout<<sum/x<<"\n";
          }
          else
          {
               sort(a,a+n);
               int d=sum/x;
               sum-=a[0];
               int d2=sum/x;
               if(d==d2)
                    cout<<"-1\n";
               else
                    cout<<d<<"\n";
          }

     }
}
