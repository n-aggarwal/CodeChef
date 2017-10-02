#include<iostream>
#include<vector>

using namespace std;

int main()
{
     int a[101],t,i=0;
     cin>>t;

     while(i<t)
     {
          int m ,x,y,j=0;
          cin>>m>>x>>y;
          vector <int> m1(m);
          for(;j<m;j++)
           cin>>m1[j];

          for(j=1;j<101;j++)
               a[j]=1;
          int r=x*y;
          int c=0;
          for(j=0;j<m;j++)
          {
               for(int d=m1[j];(d<=m1[j]+r)&&(d<101);d++)
               {
                    a[d]=0;
               }
               int q=m1[j]-r;
               if(q<1)
                    {for(int k=1;k<=m1[j];k++)
                    {
                    a[k]=0;
                    }
                    }

               else
               {
                    for(int d=q;d<=m1[j];d++)
                    {
                         a[d]=0;
                    }
               }
          }
          for(j=1;j<101;j++)
          {
               if(a[j]==1)
                    c++;
          }
          cout<<c<<"\n";
          i++;
     }


}
