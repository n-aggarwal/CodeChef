#include<iostream>
#include<vector>

using namespace std;

int main()
{
     int t,i=0;
     cin>>t;

     while(i<t)
     {
          long int n,k;
          cin>>n>>k;

          vector <long int> a(n);
          long int c=0;

          for(long int k=0;k<n;k++)
               cin>>a[k];

          for(long int j=0;j<n;j++)
          {
               if(a[j]%k!=0)
               {
                    long int m=a[j]%k;
                    if((m<=k/2)&&((a[j]-m)!=0))
                    {
                         c=c+m;
                    }
                    else
                    {
                         c=c+k-m;
                    }

               }
          }

          cout<<c<<"\n";
          i++;
     }
}
