#include<iostream>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          long long int g,n,i,k,sum=0;
          cin>>n>>k;
          for(i=0;i<n;i++)
          {
               cin>>g;
               sum+=g;
          }
          for(i=0;i<k-1;i++)
          {
               sum+=sum+1;
          }

          if((sum+1)%2==0)
               cout<<"even\n";
          else
               cout<<"odd\n";

     }
}
