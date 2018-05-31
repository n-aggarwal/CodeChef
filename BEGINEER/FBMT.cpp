#include<bits/stdc++.h>

using namespace std;

int main()
{
     long t;
     cin>>t;

     while(t--)
     {
          long n;
          cin>>n;

          unordered_map <string,long> mp;

          string str;
          for(long i=0;i<n;i++)
          {
               cin>>str;
               mp[str]++;
          }
          long a=mp[str],b=0;
          string str2;
          for(auto it=mp.begin();it!=mp.end();it++)
          {
               if(it->first!=str)
               {
                    str2= it->first;
                    b=it->second;
                    break;
               }
          }
          if(a==b)
               cout<<"\nDraw";
          else if(a>b)
               cout<<"\n"<<str;
          else
               cout<<"\n"<<str2;

     }
}
