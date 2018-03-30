#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          long a,b;
          cin>>a>>b;
          int num[1000]={},i=0;

          while(a>0||b>0)
          {
               int d1=a%10;
               int d2=b%10;
               num[i++]=(d1+d2)%10;
               a/=10;
               b/=10;
          }
          for(i=i-1;i>0;i--)
               if(num[i]!=0)
                    break;
          for(;i>=0;i--)
               cout<<num[i];
          cout<<"\n";
     }
}
