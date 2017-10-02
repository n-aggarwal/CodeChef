#include<iostream>

using namespace std;

int main()
{
     int t,i=0;
     cin>>t;

     while(i<t)
     {
          long int a,b,c,d;
          cin>>a>>b;
          long int temp;
          c=a;
          d=b;
          while(a!=0)
          {
               temp=b;
               b=a;
               a=temp%a;
          }
          cout<<b<<" "<<(c*d)/b<<"\n";
          i++;
     }
}
