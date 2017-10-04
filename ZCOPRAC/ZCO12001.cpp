#include<iostream>
#include<vector>

using namespace std;

int main()
{
     long n;
     cin>>n;
     vector <int> a(n+1);
     vector <int> flag(n);
     vector <int> index(n);

     long i,j,k=0,x=0,y=0,z=0;

     for(i=1;i<=n;i++)
          cin>>a[i];
     k=0;j=0;x=0;
     for(i=1;i<=n;i++)
     {
          if(a[i]==1)
               j++;

          if(j>k)
               k=j;

          if(a[i]==2)
               j--;

          if(j==0)
          {
               flag[y]=k;
               k=0;
               y++;
          }
     }
     long ma=flag[0];
     long in=index[0];

      for(i=0;i<y;i++)
     {
          if(ma<flag[i])
          {
               ma=flag[i];
          }
     }
     cout<<ma;j=0;
     for(i=1;i<=n;i++)
     {
          if(a[i]==1)
               j++;
          if(a[i]==2)
               j--;
          if(j==ma)
          {
               cout<<" "<<i;
               break;
          }

     }


     k=0;x=0;y=0;z=0;
     j=1;
     for(i=1;i<=n;i++)
     {
          if(a[i]==1)
               {    z=1;
                    x++;
               }
          if(a[i]==2)
               {
                    x--;
               }
          if(x==0)
               {
                    z=0;
               }
          else
                    k++;
          if(z==0)
              {
                   flag[y]=k+1;
                   k=0;
                   index[y]=j;
                   y++;
                   j=i+1;
              }

     }

      ma=flag[0];
      in=index[0];

     for(i=0;i<y;i++)
     {
          if(ma<flag[i])
          {
               ma=flag[i];
               in=index[i];;
          }
     }
     cout<<" "<<ma<<" "<<in;



}
