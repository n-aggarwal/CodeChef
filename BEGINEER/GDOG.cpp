#include<iostream>

using namespace std;

int main()
{
     int t,i=0;
     cin>>t;

     while(i<t)
     {
          int n,k;
          cin>>n>>k;

          int ma=n%k;
          for(int j=1;j<k;j++)
           {
               if(ma<(n%j))
                    ma=n%j;
           }
           cout<<ma<<"\n";
           i++;

     }
}
