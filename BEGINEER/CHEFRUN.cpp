#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          long x1,x2,x3,v1,v2;
          cin>>x1>>x2>>x3>>v1>>v2;

          x1 = x3-x1;
          x2 = x2-x3;

          double time1 = (double)x1/v1;
          double time2 = (double)x2/v2;

          if(time1==time2)
               cout<<"Draw\n";
          else if(time1>time2)
               cout<<"Kefa\n";
          else
               cout<<"Chef\n";
     }
}
