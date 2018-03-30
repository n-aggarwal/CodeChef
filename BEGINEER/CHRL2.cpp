#include<bits/stdc++.h>

using namespace std;

int main()
{
     string s;
     cin>>s;

     long i,count=0,n=s.length();
     int a[4]={0};

     for(i=0;i<n;i++)
     {
          if(s[i]=='C')
               a[0]++;
          else if(s[i]=='H'&&a[0]>0)
          {
               a[1]++;
               a[0]--;
          }
          else if(s[i]=='E'&&a[1]>0)
          {
               a[2]++;
               a[1]--;
          }
          else if(s[i]=='F'&&a[2]>0)
          {
               a[3]++;
               a[2]--;
          }
     }
     cout<<a[3];
}
