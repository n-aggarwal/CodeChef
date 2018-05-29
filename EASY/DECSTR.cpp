#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int n;
          cin>>n;

          string s1 = "zyxwvutsrqponmlkjihgfedcba";
          int x= n/25,y=n%25;
          if(y!=0)
          {
               for(int i=25-y;i<=25;i++)
                    cout<<s1[i];
          }
          for(int i=0;i<x;i++)
               cout<<s1;
          cout<<"\n";
     }
}
