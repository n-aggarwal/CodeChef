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

          long ttime=0;

          for(int i=0;i<n;i++)
          {
               int x,l,f;
               cin>>x>>l>>f;
               int n1=0;
               while(ttime>x+n1*f)
               {
                    n1++;
               }
               //cout<<ttime<<" ";
               ttime+=(x+n1*f)-ttime+l;
               //cout<<ttime<<"\n";
          }
          cout<<ttime<<"\n";
     }
}
