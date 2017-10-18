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

          long x[n],y[n];

          for(i=0;i<n;i++)
               cin>>x[i];
          for(i=0;i<n;i++)
               cin>>y[i];

          int flag=1;
          int sum1=0,sum2=0;
          for(i=0;i<n;i++)
          {    if(flag==1)
               {
                    sum1+=x[i];
                    sum2+=y[i];
                    flag=0;
               }
               else
               {
                    sum1+=y[i];
                    sum2+=x[i];
                    flag=1;
               }

          }
          if(sum1>sum2)
               cout<<sum2<<"\n";
          else
               cout<<sum1<<"\n";


     }
}
