#include<iostream>


using namespace std;

int main()
{
     int t,i=0;
     cin>>t;

     while(i<t)
     {
          int l,b,r;
          cin>>l>>b;
          int n=b,m=l;
          if(l<b)
          {
               r=b;
               b=l;
               l=r;
          }
          r=l%b;
          while(r>0)
          {
               l=b;
               b=r;
               r=l%b;
          }
          cout<<(n/b)*(m/b)<<"\n";

          i++;
     }
}
