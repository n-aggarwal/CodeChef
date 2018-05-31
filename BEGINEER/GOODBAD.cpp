#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int n,k;
          cin>>n>>k;

          string str;
          cin>>str;

          int l=0,u=0;
          for(int i=0;i<n;i++)
          {
               if(str[i]>='a'&&str[i]<='z')
                    l++;
               else
                    u++;
          }
          if(l<=k&&u<=k)
               cout<<"both\n";
          else if(l<=k&&u>k)
               cout<<"brother\n";
          else if(l>k&&u<=k)
               cout<<"chef\n";
          else
               cout<<"none\n";
     }
}
