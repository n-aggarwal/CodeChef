#include<iostream>

using namespace std;

int main()
{
     int t,i=0;
     cin>>t;

     while(i<t)
     {
          int n ,m ,k;
          cin>>n>>m>>k;

          if(n>m)
          {
               int z=m+k;
               if(n>z)
                    cout<<n-z<<"\n";
               else
                    cout<<"0\n";

          }
          else if(m>n)
          {
               int z=n+k;
               if(m>z)
                    cout<<m-z<<"\n";
               else
                    cout<<"0\n";



          }
          else
               cout<<"0\n";

          i++;
     }
}
