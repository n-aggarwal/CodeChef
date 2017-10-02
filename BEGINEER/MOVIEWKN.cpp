#include<iostream>
#include<vector>

using namespace std;

int main()
{
     int t,i=0;
     cin>>t;
     while(i<t)
     {
          int n,j=0;
          cin>>n;

          vector <int> l(n);
          vector <int> r(n);
          vector <int> ind(n+1);
          vector <int> indx(n+1);
          ind[0]=0;
          for(;j<n;j++)
               cin>>l[j];
          for(j=0;j<n;j++)
               cin>>r[j];


          int c=0, x=0;
          int mul=l[0]*r[0];
          for(j=1;j<n;j++)
          {
               if(l[j]*r[j]>mul)
               {
                    mul=l[j]*r[j];
                    x=0;
                    c=j;
                    ind[0]=j;
               }
               else if(l[j]*r[j]==mul)
               {    x++;
                    ind[x]=j;

               }
          }
          indx[0]=ind[0];
          int p=r[ind[0]],p1=0,f=ind[0];
          if(x>0)
          {
               for(int k=1;k<x+1;k++)
               {
                    if(r[ind[k]]>p)
                    {
                         p=r[ind[k]];
                         p1=0;
                         f=ind[k];
                         indx[0]=f;
                    }
                    else if(r[ind[k]]==p)
                    {
                         p1++;
                         indx[p1]=ind[k];
                    }
               }
          }
        //  for(j=0;j<p1+1;j++)
         //      cout<<indx[j]<<" ";

          int dz=indx[0];
          if((x>0)&&(p1>0))
          {
               cout<<dz+1<<"\n";
          }
          else if(x>0)
               cout<<f+1<<"\n";
          else
               cout<<c+1<<"\n";


          i++;
     }
}
