#include<iostream>

using namespace std;

int main()
{
     int a,b;
     cin>>a>>b;

     int z=a-b;

     if(z%10==0)
     {
          z++;
     }
     else if(z%10==9)
     {
          z--;
     }
     else
          z++;
     cout<<z;
}
