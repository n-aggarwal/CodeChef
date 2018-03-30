#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          long n;
          cin>>n;

          long i=1,PL=1,PB=n,CL,CB;
          if(sqrt(n)*sqrt(n)==n)
          {
               cout<<"0"<<"\n";
               continue;
          }
          while(true)
          {
               i++;
               if(n%i==0)
               {
                    CL=i;
                    CB=n/i;
                    if(CL==PB)
                         break;
                    else
                    {
                         PL=CL;
                         PB=CB;
                    }
               }
          }
           cout<<abs(PL-PB)<<"\n";
     }
}
