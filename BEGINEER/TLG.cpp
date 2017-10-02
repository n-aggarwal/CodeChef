#include<iostream>
#include<vector>

using namespace std;

int main()
{
     int t,i=0;
     cin>>t;

     vector <int> ans1(t);
     vector <int> ans2(t);
     int sum1=0,sum2=0;
     while(i<t)
     {
          int a,b;
          cin>>a>>b;
          sum1+=a;
          sum2+=b;

          if(sum1>sum2)
          {
               ans1[i]=sum1-sum2;
               ans2[i]=1;
          }
          else
          {
               ans1[i]=sum2-sum1;
               ans2[i]=2;
          }
          i++;
     }
     int ma=0,j;
     for(i=0;i<t;i++)
     {
          if(ans1[i]>ma)
               {ma=ans1[i];
               j=ans2[i];
               }
     }
     cout<<j<<" "<<ma;
}
