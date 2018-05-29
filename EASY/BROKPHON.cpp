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

          long arr[n],i;

          for(i=0;i<n;i++)
               cin>>arr[i];
          int wrong=0;
          int faulty=0;
          for(i=0;i<n-1;i++)
          {
               if(arr[i]!=arr[i+1])
               {
                    if(i==0)
                         wrong++;
                    if(faulty==i)
                         wrong++;
                    else
                         wrong+=2;
                    faulty = i+1;
               }
          }
          cout<<wrong<<"\n";
     }
}
