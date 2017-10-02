#include<iostream>
#include<vector>
using namespace std;

int main()
{
     int n,i=0;
     cin>>n;
     vector <int> a(n);

     for(;i<n;i++)
          cin>>a[i];
     int odd=0,even=0;
     for(i=0;i<n;i++)
    {
         if(a[i]%2==0)
          {++even;
          }
     else
          {++odd;
          }
    }
    if(even>odd)
     cout<<"READY FOR BATTLE\n";
    else
     cout<<"NOT READY\n";


}
