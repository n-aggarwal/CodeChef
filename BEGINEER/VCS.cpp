#include<iostream>
#include<vector>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int n,m,k;
          cin>>n>>m>>k;

          vector <int> fl(n+1);

          int i,x,y;
          for(i=1;i<=n;i++)
               fl[i]=0;

          for(i=1;i<=m;i++)
               {
                    cin>>x;
                    fl[x]++;
               }

          for(i=1;i<=k;i++)
               {
                    cin>>x;
                    fl[x]++;
               }
               x=0;y=0;
          for(i=1;i<=n;i++)
          {
               if(fl[i]==2)
                    x++;
               else if(fl[i]==0)
                    y++;
          }

          cout<<x<<" "<<y<<"\n";

     }
}
