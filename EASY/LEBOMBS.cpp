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

          string str;
          cin>>str;
          string str2=str;
          if(n==1)
          {
               if(str[0]=='0')
                    cout<<"1\n";
               else
                    cout<<"0\n";
               continue;
          }
          int cnt=0;
          for(int i=0;i<n;i++)
          {
               if(i==0&&(str[0]=='1'||str[1]=='1'))
                    cnt++;
               else if(i==n-1&&(str[i]=='1'||str[i-1]=='1'))
                    cnt++;
               else if(str[i]=='1'||str[i+1]=='1'||str[i-1]=='1')
                    cnt++;
          }
          cout<<n-cnt<<"\n";
     }

}
