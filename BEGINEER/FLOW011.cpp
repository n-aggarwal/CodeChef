#include<iostream>


using namespace std;

int main()
{
     int t,i=0;
     cin>>t;

     while(i<t)
     {
         double bs,hra,da;

          cin>>bs;

          if(bs<1500)
          {hra=bs*0.1;
          da=bs*0.9;}
          else
          {
               hra=500;
               da=bs*0.98;
          }
          cout<<endl<<bs+hra+da<<endl;
          i++;

     }

}
