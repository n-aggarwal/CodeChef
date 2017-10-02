#include<iostream>
#include<vector>

using namespace std;

int main()
{
     int t,i=0;
     cin>>t;

     while(i<t)
     {    long int n;
          cin>>n;
          vector <long int> a(n);

          for(int k=0;k<n;k++)
               cin>>a[k];

          long long int mi=a[0];

          for(int j=0;j<n;j++)
          {
               if(mi>a[j])
                    mi=a[j];
          }

          cout<<mi*(n-1)<<endl;
          i++;
     }
}
