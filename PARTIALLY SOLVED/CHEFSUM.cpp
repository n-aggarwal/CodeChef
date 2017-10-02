#include<iostream>
#include<vector>

using namespace std;

long long int psum(long long int i,vector <long long int> a)
{     long long int sum=0;
     for(long long int j=1;j<=i;j++)
          sum=sum+a[j];
     return sum;

}

long long int ssum(long long int i,vector <long long int> a,long long int n)
{     long long int sum=0;
     for(long long int j=n-1;j>=i;j--)
          sum=sum+a[j];
     return sum;

}

int main()
{
     int t,i=0;
     cin>>t;

     while(i<t)
     {
          long long int n,j;
          cin>>n;
          n++;
          vector <long long int> a(n);
          for(j=1;j<n;j++)
              cin>>a[j];

          long long int mi=ssum(1,a,n)+psum(1,a);
          long long int k=1;
          for(j=1;j<n;j++)
          {
               if(mi>ssum(j,a,n)+psum(j,a))
               {
                    mi=ssum(j,a,n)+psum(j,a);
                    k=j;
               }
          }
          cout<<k<<"\n";
          i++;
     }
}
