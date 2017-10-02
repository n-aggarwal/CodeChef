#include<iostream>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          long c,d,l;
          cin>>c>>d>>l;
          if((l%4!=0)||(l>(c+d)*4)||(l<d*4))
          {
               cout<<"no\n";
               continue;
          }
          else
          {
               if((c>=d*2)&&(l<d*4))
               {
                    cout<<"no\n";
                    continue;
               }
               if((c>d*2)&&(l<(d*4)+((c-(d*2))*4)))
               {
                    cout<<"no\n";
                    continue;
               }
               cout<<"yes\n";
          }

     }
}
