#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          string s;
          cin>>s;

          unordered_map <char,int> up;

          for(int i=0;i<s.length();i++)
               up[s[i]]=1;
          long count=0;
          for(auto it=up.begin();it!=up.end();it++,count++);
          cout<<count<<"\n";
     }
}
