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

          unordered_map <char,int> mp;
          for(int i=0;i<str.length();i++)
               mp[str[i]]++;
          int arr[26],n=0;
          for(auto it=mp.begin();it!=mp.end();it++)
               arr[n++]=it->second;
          sort(arr,arr+n);

          if(n<2||str.length()<3)
          {
               cout<<"Dynamic\n";
               continue;
          }
          int i;
          for(i=2;i<n;i++)
          {
               if(i==3)
               {
                    if(arr[3]!=arr[2]+arr[1])
                    {
                         if(arr[3]!=arr[2]+arr[0])
                              break;
                    }
               }
               else if(arr[i]!=arr[i-1]+arr[i-2])
                    break;
          }
          if(i==n)
               cout<<"Dynamic\n";
          else
               cout<<"Not\n";
     }
}
