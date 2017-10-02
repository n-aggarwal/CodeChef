#include<iostream>
#include<vector>
#include<string.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          char x[100000],y[100000];
          cin>>x>>y;

          long n=strlen(x);
          vector <int> flag(n);
          long i;

          for(i=0;i<n;i++)
               flag[i]=0;

          for(i=0;i<n;i++)
          {
               if(x[i]=='W')
                    flag[i]++;
               if(y[i]=='W')
                    flag[i]++;
               if(x[i]=='B')
                    flag[i]--;
               if(y[i]=='B')
                    flag[i]--;
          }
          for(i=0;i<n;i++)
          {
               if(flag[i]==2)
                    cout<<"B";
               else if(flag[i]==-2)
                    cout<<"W";
               else if(flag[i]==0)
                    cout<<"B";
          }
          cout<<"\n";
     }
}
