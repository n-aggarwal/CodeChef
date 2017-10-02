#include<vector>
#include<iostream>

long int z(int n)
{
     int x=0,y=0;
     int r=n;

     while(r>0)
     {
          x+=r/2;
          r=r/2;
     }
     r=n;
     while(r>0)
     {
          y+=r/5;
          r=r/5;
     }
     if(x<y)
          return x;
     else
          return y;
}
 using namespace std;

 int main()
 {
      int t,i=0;
      cin>>t;
      vector <long int> ans(t);
      while(i<t)
      {
           long int n;
           cin>>n;
           ans[i]=z(n);
           i++;
      }
      for(i=0;i<t;i++)
          cout<<ans[i]<<"\n";
 }
