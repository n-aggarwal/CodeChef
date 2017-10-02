#include<iostream>

using namespace std;

int main()
{
     int t,i=0;
     cin>>t;

     while(i<t)
     {
          int n;
          cin>>n;
          long int ans=1;

          for(int z=1;z<=n;z++)
               ans=ans*z;
          cout<<"\n"<<ans;
          i++;
     }
}
