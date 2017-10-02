#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          long n,m;
          cin>>n>>m;

          vector <long> a(n);
          vector <long> b(m);

          long i,j,k,count=0;

          for(i=0;i<n;i++)
               cin>>a[i];
          for(i=0;i<m;i++)
               cin>>b[i];

          sort(a.begin(),a.end());
          sort(b.begin(),b.end());
          i=0;j=0;
          for(;i<n&&j<m;)
          {
               if(a[i]==b[j])
               {
                    count++;
                    i++;
                    j++;
               }
               else if(a[i]<b[j])
                    i++;
               else
                    j++;


          }
          cout<<count<<"\n";
     }
}
