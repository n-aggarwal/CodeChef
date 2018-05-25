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

          int count=1;
          int j=str.length()-1,i=0;
          for(;i<=j;i++,j--)
          {
               if(str[i]==str[j]&&str[i]=='?')
                    count*=26;
               if(str[i]!=str[j]&&str[i]!='?'&&str[j]!='?')
                    count=0;
               count=count%10000009;
          }
          cout<<count<<"\n";
     }
}
