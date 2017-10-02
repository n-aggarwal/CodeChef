#include<iostream>

using namespace std;

int sum (int n)
{     int x=0;
     for(int i=1;i<=n;i++)
          x+=i;
     return x;
}
int main()
{
     int t,i=0;
     cin>>t;

     while(i<t)
     {
          int n,d;
          cin>>d>>n;
          int r=sum(n);

          for(int i=1;i<d;i++)
               r=sum(r);

          cout<<r<<"\n";
          i++;
     }
}


