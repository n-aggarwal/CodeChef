#include<iostream>
#include<math.h>

using namespace std;

int main()
{
     int t,i=0;
     cin>>t;
     int flag;

     while(i<t)
     {    flag=1;
          int r;
          cin>>r;
          int x[3],y[3];
          cin>>x[0]>>y[0]>>x[1]>>y[1]>>x[2]>>y[2];
          float a,b,c;
          a=sqrt(((x[0]-x[1])*(x[0]-x[1]))+((y[0]-y[1])*(y[0]-y[1])));
          b=sqrt(((x[2]-x[1])*(x[2]-x[1]))+((y[2]-y[1])*(y[2]-y[1])));
          c=sqrt(((x[0]-x[2])*(x[0]-x[2]))+((y[0]-y[2])*(y[0]-y[2])));
          if((a<r)&&(b<r)&&(c<r))
          {
               flag=1;
          }
          else if(a>r)
          {
               if((b>r)||(c>r))
                    flag=0;
          }
          else if(b>r)
          {
               if((a>r)||(c>r))
                    flag=0;
          }
          else if(c>r)
          {
               if((b>r)||(a>r))
                    flag=0;
          }

          if(flag==0)
               cout<<"no\n";
          else
               cout<<"yes\n";
          i++;
     }



}
