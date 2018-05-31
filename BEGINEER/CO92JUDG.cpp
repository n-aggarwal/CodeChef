#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int n;
          cin>>n;

          int a[n],tsumA=0,b[n],tsumB=0;
          for(int i=0;i<n;i++)
          {
               cin>>a[i];
               tsumA+=a[i];
          }
          sort(a,a+n);
          for(int i=0;i<n;i++)
          {
               cin>>b[i];
               tsumB+=b[i];
          }
          sort(b,b+n);
          if(tsumA-a[n-1]>tsumB-b[n-1])
               cout<<"Bob\n";
          else if(tsumA-a[n-1]==tsumB-b[n-1])
               cout<<"Draw\n";
          else
               cout<<"Alice\n";
     }
}
