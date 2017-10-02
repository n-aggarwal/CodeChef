#include<iostream>
#include<vector>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          long n;
          cin>>n;

          vector <int> f(n);
          vector<long> a(n);

          long i,j,k,x,y,z;
          for(i=0;i<n;i++)
              {
                   cin>>a[i];
              }
          for(i=0;i<n;i++)
               f[i]=1;
          for(i=n-1;i>0;i--)
          {
               if((a[i-1]<0&&a[i]>0)||(a[i-1]>0&&a[i]<0))
                    f[i-1]=f[i-1]+f[i];

          }
          for(i=0;i<n;i++)
               cout<<f[i]<<" ";
          cout<<"\n";



     }
}
