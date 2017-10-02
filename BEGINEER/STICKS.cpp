#include<iostream>
#include<vector>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int n;
          cin>>n;

          int flag[1001];
          int i,j,k,x,y,z;

          for(i=0;i<1001;i++)
               flag[i]=0;

          for(i=0;i<n;i++)
          {
               cin>>j;
               flag[j]++;
          }
          vector <long int> g4(n);
          vector <int> g2(n);
          j=0;k=0;
          for(i=0;i<1001;i++)
          {
               if(flag[i]>=4)
                    g4[j++]=i;
               if(flag[i]>=2)
                    g2[k++]=i;
          }
          for(i=0;i<j;i++)
          g4[i]*=g4[i];
          long area=0;
          if(k>1)
          {
               int max=g2[0],zz=0,max2=g2[0];

               for(i=0;i<k;i++)
               {
                    if(g2[i]>max)
                    {
                         max=g2[i];
                         zz=i;
                    }
               }
               if((zz==0)&&(k>1))
                    max2=g2[1];
               for(i=0;i<k;i++)
               {
                    if(g2[i]>max2&&i!=zz)
                         max2=g2[i];
               }
               area=max*max2;
          }
          for(i=0;i<j;i++)
          {
               if(area<g4[i])
                    area=g4[i];
          }
          if(area==0)
               cout<<"-1\n";
          else
               cout<<area<<"\n";

     }
}
