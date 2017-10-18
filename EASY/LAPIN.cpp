#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          char s[1000];
          cin>>s;
          int l=strlen(s);

          int flag[26],i;

          for(i=0;i<26;i++)
               flag[i]=0;

          for(i=0;i<l/2;i++)
          {
               flag[s[i]-'a']++;
               flag[s[l-i-1]-'a']++;
          }
          int flag2=1;

         // for(i=0;i<26;i++)
          //     cout<<flag[i]<<" ";
         // cout<<"\n";

          for(i=0;i<26;i++)
          {
               if(flag[i]%2!=0)
               {
                    flag2=0;
                    break;
               }
          }
          if(flag2==1)
               cout<<"YES\n";
          else
               cout<<"NO\n";

     }
}
