#include<iostream>
#include<vector>

using namespace std;

int main()
{
     long n,i,q,j,max=0,min=10000000000;
     cin>>n>>q;


     for(i=0;i<n;i++)
          {
               cin>>j;
               if(j<min)
                    min=j;
               if(j>max)
                    max=j;
          }


     while(q--)
     {    long t;
          cin>>t;
          if(t>=min&&t<=max)
               cout<<"Yes\n";
          else
               cout<<"No\n";
     }
}
