#include<iostream>


using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          long long int n,b,m;
          cin>>n>>b>>m;
          long long int total=0;
          do
          {
               if((n%2==1)&&(n!=1))
                    {
                         total+=((n+1)/2)*m;
                         n-=(n+1)/2;
                    }
               else if(n==1)
                    {
                         total+=n*m;
                         break;
                    }
               else
               {
                    total+=((n)/2)*m;
                         n-=n/2;
               }


               m*=2;
               total+=b;
          }while(n>0);

          cout<<total<<"\n";
     }
}
