#include<iostream>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          long long int n,m;
          cin>>n>>m;

          if(n*m%2==1)
               cout<<"No\n";
               else
                    cout<<"Yes\n";
     }
}
