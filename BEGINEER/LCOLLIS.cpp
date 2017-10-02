#include<iostream>

using namespace std;

int c(int k)
{
     if(k==0)
          return 0;
     else if(k==1)
          return 0;
     else if(k==2)
          return 1;
     else if(k==3)
          return 3;
     else if(k==4)
          return 6;
     else if(k==5)
          return 10;
     else if(k==6)
          return 15;
     else if(k==7)
          return 21;
     else if(k==8)
          return 28;
     else if(k==9)
          return 36;
     else if(k==10)
          return 45;
     else
          return 0;

}

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int n,m;
          cin>>n>>m;
          int a[10][10];
          char ch[10];
          int i,j,k=0;

          for(i=0;i<n;i++)
               {
                    cin>>ch;
                    for(j=0;j<m;j++)
                    {
                         if(ch[j]=='0')
                              a[i][j]=0;
                         else
                              a[i][j]=1;
                    }
               }
          for(i=0;i<m;i++)
          {    int d=0;
               for(j=0;j<n;j++)
               {
                    if(a[j][i]==1)
                         d++;
               }
               k+=c(d);
          }
          cout<<k<<"\n";
     }
}
