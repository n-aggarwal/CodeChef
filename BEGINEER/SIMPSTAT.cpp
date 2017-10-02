#include<iostream>
#include<vector>
#include<iomanip>
//#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int n,k;
          cin>>n>>k;

          vector <long int> a(n);

          int i,j,f,x,y;
          double z=0;

          for(i=0;i<n;i++)
               cin>>a[i];
          /*
          for(i=0;i<n;i++)
          {
               for(j=i;j<n;j++)
               {
                    if(a[i]>a[j])
                    {
                         f=a[i];
                         a[i]=a[j];
                         a[j]=f;
                    }
               }
          }
          */
          sort(a.begin(),a.end());
          y=0;
          for(i=k;i<n-k;i++)
             {
                  z+=a[i];
                  y++;
             }
             cout<<fixed<<setprecision(6)<<z/y<<"\n";

     }
}

