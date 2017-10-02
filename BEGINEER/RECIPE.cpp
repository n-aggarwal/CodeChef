#include<iostream>
#include<vector>

using namespace std;

int main()
{
     int t,i=0;
     cin>>t;
      while(i<t)
      {    int n;
           cin>>n;
           vector <int> a(n);
           int j;
           for(int j=0;j<n;j++)
               cin>>a[j];
           int n1=a[0],n2;
           for(j=1;j<n;j++)
           {   n2=a[j];
               int tmp;
               while (n2 != 0)
               {
                  tmp = n1;
                  n1 = n2;
                  n2 = tmp % n2;
              }
           }
           for(j=0;j<n;j++)
               cout<<a[j]/n1<<" ";
               cout<<"\n";
           i++;

     }
}
