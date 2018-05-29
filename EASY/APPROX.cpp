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
          long num = 4687;
          if(n==0)
               cout<<"3";
          else
               cout<<"3.";
          for(int i=0;i<n;i++)
          {
               num*=10;
               cout<<num/33102;
               num=num%33102;
          }
          cout<<"\n";
     }
}
