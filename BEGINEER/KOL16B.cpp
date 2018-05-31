#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;
     int tr=0;
     while(++tr<=t)
     {
          int n;
          cin>>n;

          int a[n],b[n];
          for(int i=0;i<n;i++)
          {
               long k;
               cin>>k;

               a[i]=k&32767;
               b[i]=k>>16;
          }
          cout<<"Case "<<tr<<":\n";
          for(int i=0;i<n;i++)
               cout<<a[i]<<" ";
          cout<<"\n";
          for(int i=0;i<n;i++)
               cout<<b[i]<<" ";
          cout<<"\n";
     }
}
