#include<iostream>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int n;
          cin>>n;
          int i,j=100;

          for(i=0;i<n;i++)
          {
               cout<<j<<" ";
               j++;
          }
          cout<<"\n";
     }

}
