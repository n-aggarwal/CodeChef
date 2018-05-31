#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;
     int count=0;
     while(t--)
     {
          string str;
          cin>>str;

          for(int i=0;i<str.length()-1;i++)
          {
               if(str[i]=='c'&&str[i+1]=='h')
               {
                    count++;
                    break;
               }
               else if(str[i]=='h'&&str[i+1]=='e')
               {
                    count++;
                    break;
               }
               else if(str[i]=='e'&&str[i+1]=='f')
               {
                    count++;
                    break;
               }
          }
     }
     cout<<count<<"\n";
}
