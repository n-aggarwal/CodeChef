#include<iostream>
#include<vector>

using namespace std;

int main()
{
     int t,i=0;
     cin>>t;

     while(i<t)
     {
          int n;
          cin>>n;
          vector <long int> a(n);
          int j ;
          for(j=0;j<n;j++)
               cin>>a[j];
          long int m1=10000000,h=-1;
          for(j=0;j<n;j++)
          {
               if(a[j]<m1)
                 {
                      m1=a[j];
                      h=j;
                 }
          }
          if(h!=-1)
               a[h]=-1;
          long int m2=10000000;
          for(j=0;j<n;j++)
          {
               if((a[j]<m2)&&(a[j]!=-1))
               {
                    m2=a[j];
               }
          }
          cout<<m1+m2<<"\n";
          i++;

     }
}
