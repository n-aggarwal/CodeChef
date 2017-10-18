#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int n,v1,v2;
          cin>>n>>v1>>v2;

          float d1,d2;

          d1=sqrt(2)*n;
          d2=2*n;

          if(d1/v1>d2/v2)
               cout<<"Elevator\n";
          else
               cout<<"Stairs\n";
     }
}
