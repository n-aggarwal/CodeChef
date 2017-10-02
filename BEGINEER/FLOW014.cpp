#include<iostream>

using namespace std;

int main()
{
     int t,i=0;
     cin>>t;

     while(i<t)
     {
          float hr , cc, ts;

          cin>>hr>>cc>>ts;
           if((hr>50)&&(cc<0.7)&&(ts>5600))
               cout<<"\n10";
           else if((hr>50)&&(cc<0.7))
               cout<<"\n9";
           else if((cc<0.7)&&(ts>5600))
               cout<<"\n8";
           else if ((hr>50)&&(ts>5600))
               cout<<"\n7";
           else if((hr>50)||(cc<0.7)||(ts>5600))
               cout<<"\n6";
           else
               cout<<"\n5";

           i++;
     }
}
