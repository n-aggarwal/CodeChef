#include<iostream>

using namespace std;

int main()
{
     int t,i=0;
     cin>>t;

     while(i<t)
     {
          int a,b,c;
          cin>>a;
          cin>>b;
          cin>>c;

          if(a+b+c==180)
          {
               cout<<"\nYES ";
          }
          else
               cout<<"\nNO";
          i++;
     }
}
