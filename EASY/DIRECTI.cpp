#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int n;
          cin>>n;

          char str1[n][1000],str2[n][1000];
          for(int i=0;i<n;i++)
               scanf("%[^ ] on %[^\n]",&str1[i],&str2[i]);

          /*for(int i=0;i<n;i++)
               cout<<str1[i];*/
          for(int i=n-1;i>=0;i--)
          {
               if(i==n-1)
                    cout<<"Begin on "<<str2[i]<<"\n";
               else
               {
                    if(strcmp(str1[i+1],"\nRight")==0)
                         cout<<"Left on "<<str2[i]<<"\n";
                    else
                         cout<<"Right on "<<str2[i]<<"\n";
               }
          }
          cout<<"\n";
     }
}
