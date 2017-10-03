#include<iostream>
#include<vector>

using namespace std;

int main()
{
     long n,h;
     cin>>n>>h;

     vector <long> a(n);

     long i;
     int flag=0;
     int j;

     for(i=0;i<n;i++)
          cin>>a[i];

     i=0;
     do
     {
          cin>>j;
          if(j==1&&i>0)
               i--;
          else if(j==2&&i<n-1)
               i++;
          else if((j==3)&&(a[i]>0)&&(flag==0))
               {    flag=1;
                    a[i]--;
               }
          else if(j==4&&a[i]<h&&flag==1)
               {    flag=0;
                    a[i]++;
               }

     }while(j!=0);
     for(i=0;i<n;i++)
          cout<<a[i]<<" ";
}
