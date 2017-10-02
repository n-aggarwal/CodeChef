#include<iostream>
#include<vector>

using namespace std;

int main()
{
     int t,i=0;
     cin>>t;

     while(i<t)
     {
          int n,j=0;
          cin>>n;

          vector <long int> a(n);
          vector <long int> b(n);

          for(;j<n;j++)
               cin>>a[j];
          for(j=0;j<n;j++)
               cin>>b[j];

          int c=0;
          if(a[0]>=b[0])
               c++;
          for(j=1;j<n;j++)
          {
               if(a[j]-a[j-1]>=b[j])
               c++;
          }
          cout<<c<<"\n";
          i++;
     }
}
