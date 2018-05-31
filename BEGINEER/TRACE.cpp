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

          int arr[n][n];

          int i,j;

          for(i=0;i<n;i++)
               for(j=0;j<n;j++)
                    cin>>arr[i][j];
          long sum,maxsum=0;

          for(i=0;i<n;i++)
          {

               sum=0;
               int x=i,y=0;

               while(x<n&&y<n)
               {
                    sum+=arr[x][y];
                    x++;
                    y++;
               }
               if(sum>maxsum)
                    maxsum=sum;
          }
          for(j=0;j<n;j++)
          {
               sum=0;
               int x=0,y=j;

               while(x<n&&y<n)
               {
                    sum+=arr[x][y];
                    x++;
                    y++;
               }
               if(sum>maxsum)
                    maxsum=sum;
          }
          cout<<maxsum<<"\n";
     }
}

