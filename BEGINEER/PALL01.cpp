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
          int r=n,d=0,x;

          do
          {
               x=n%10;
               d=(d*10)+x;
               n=n/10;
          }while(n>0);

          if(r==d)
               cout<<"wins\n";
          else
               cout<<"losses\n";
          i++;
     }
}
