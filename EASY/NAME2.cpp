#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          bool flag=false;
          string s1,s2;
          cin>>s1>>s2;
          if(s1.length()>s2.length())
          {
               int i,j;
               for(i=0,j=0;i<s1.length()&&j<s2.length();i++)
               {
                    if(s1[i]==s2[j])
                         j++;
               }
               if(j==s2.length())
                    flag=true;
          }
          else if(s1.length()<s2.length())
          {
               int i,j;
               for(i=0,j=0;j<s2.length()&&i<s1.length();j++)
               {
                    if(s1[i]==s2[j])
                         i++;
               }
               if(i==s1.length())
                    flag=true;
          }
          else if(s1==s2)
               flag=true;
          if(flag)
               cout<<"YES\n";
          else
               cout<<"NO\n";
     }
}
