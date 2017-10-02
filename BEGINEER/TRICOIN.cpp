#include<iostream>

using namespace std;

int main()
{
     int t,i=0;
     cin>>t;

     while(i<t)
     {
          long int n,j;
          cin>>n;

          long long int sum=0;
          for(j=1;sum<=n;j++)
               {sum+=j;
               //cout<<sum<<" ";
               }

               cout<<j-2<<"\n";
               i++;

     }
}
