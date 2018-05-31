#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          string str;
          cin>>str;

          unordered_map <char,int> mp;

          int i;
          for(i=0;i<str.length();i++)
          {
               if(mp[str[i]]==0)
                    mp[str[i]]=1;
               else
                    break;
          }
          if(i==str.length())
               cout<<"no\n";
          else
               cout<<"yes\n";
     }
}
