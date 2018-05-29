#include<bits/stdc++.h>

using namespace std;

int main()
{
     int n,count=0;
     cin>>n;

     while(n--)
     {
          int x1,x2,x3,y1,y2,y3;
          double _12,_23,_13;
          cin>>x1>>y1>>x2>>y2>>x3>>y3;

          _12 = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
          _13 = (x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
          _23 = (x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);

          if(_12 + _13 ==_23)
               count++;
          else if(_12+_23==_13)
               count++;
          else if(_23+_13==_12)
               count++;
     }
     cout<<count;
}
