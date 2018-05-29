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

          long opening=0,count=0;

          for(long i=0;i<str.length();i++)
          {
               if(str[i]=='<')
               {
                    opening++;
                    //cout<<"!";
               }
               else
               {
                    opening--;
                    if(opening==0)
                         count = max(count,i+1);
                    else if(opening<0)
                         break;
               }
          }
          cout<<count<<"\n";
     }
}
