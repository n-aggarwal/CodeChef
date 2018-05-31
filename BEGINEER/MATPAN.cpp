#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          long arr[27];
          for(int i=1;i<27;i++)
               cin>>arr[i];

          string str;
          cin>>str;

          long arr2[27]={};
          for(int i=0;i<str.length();i++)
               arr2[str[i]-'a'+1]++;
          long cost=0;

          for(int i=1;i<27;i++)
          {
               if(arr2[i]==0)
                    cost+=arr[i];
          }
          cout<<cost<<"\n";
     }
}
