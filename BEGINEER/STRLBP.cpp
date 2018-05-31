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

          int count=0;
          if(str[0]!=str[7])
               count++;
          for(int i=1;i<8;i++)
          {
               if(str[i]!=str[i-1])
                    count++;
          }
          if(count<=2)
               cout<<"uniform\n";
          else
               cout<<"non-uniform\n";
     }
}
