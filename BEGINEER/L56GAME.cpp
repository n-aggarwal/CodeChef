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

          int k;
          int odd=0;

          for(int i=0;i<n;i++)
          {
               cin>>k;
               if(k%2==1)
                    odd++;
          }
          if(n==1||odd%2==0)
               cout<<"1\n";
          else
               cout<<"2\n";
     }
}
