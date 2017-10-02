#include<iostream>

using namespace std;

int main()
{
     long int t,n,k,i=0,c=0;
     cin>>t;
     cin>>k;
     while(i<t)
     {
          cin>>n;
          if(n%k==0)
               c++;
               i++;
     }
     cout<<"\n"<<c;
}
