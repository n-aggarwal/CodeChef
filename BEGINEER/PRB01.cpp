#include<iostream>

using namespace std;

int main()
{
     int t,i=0;
     cin>>t;

     while(i<t)
     {
          int n;
          cin>>n;
          int flag=1;

          for(int j=2;j<=n/2;j++)
          {
               if(n%j==0)
                   {
                        flag=0;
                        break;
                   }
          }
          if(flag==0)
          cout<<"no\n";
          else
               cout<<"yes\n";
          i++;
     }
}
