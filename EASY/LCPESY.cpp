#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          string s1,s2;
          cin>>s1>>s2;

          unordered_map <char,int> up;

          int i;
          int n=s1.length();
          for(i=0;i<n;i++)
               up[s1[i]]++;
          int count=0;
          n=s2.length();
          for(i=0;i<n;i++)
          {
               if(up[s2[i]]!=0)
               {
                    up[s2[i]]--;
                    count++;
               }
          }
          cout<<count<<"\n";
     }
}
