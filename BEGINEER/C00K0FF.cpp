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

          int arr[5]={};
          for(int i=0;i<n;i++)
          {
               string str;
               cin>>str;

               if(str=="cakewalk")
                    arr[0]=1;
               else if(str=="simple")
                    arr[1]=1;
               else if(str=="easy")
                    arr[2]=1;
               else if(str=="easy-medium"||str=="medium")
                    arr[3]=1;
               else
                    arr[4]=1;
          }
          int i;
          for(i=0;i<5;i++)
          {
               if(arr[i]==0)
                    break;
          }
          if(i==5)
               cout<<"Yes\n";
          else
               cout<<"No\n";
     }
}
