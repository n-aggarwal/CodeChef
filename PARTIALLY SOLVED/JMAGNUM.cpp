#include<iostream>
#include<vector>

using namespace std;

long long int dsum(long long int a)
{
     long long int sum=0,x;
     do
     {
          x=a%10;
          sum+=x;
          a=a/10;
     }while(a>0);
     return sum;
}

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          long long int l,r,as;
          cin>>l>>r;

          long long  int n=r-l+1;

          vector <long long int> num(n);

          long long int i,j,k,x,y,z;
          j=l;
          for(i=0;i<n;i++)
          {
              num[i]=j;
              j++;
          }
          for(i=0;i<n;i++)
          {
               vector <long long int> pfactor(r);
               x=0;
               if(num[i]==1)
                    {
                         num[i]=0;
                         continue;
                    }

               for(j=2;j<=num[i];j++)
               {
                    while(num[i]%j==0)
                    {
                         num[i]/=j;
                         pfactor[x++]=j;
                    }
               }
               vector <long long  int> uni(r);
               y=0;
               for(j=0;j<x;j++)
               {
                    for(k=0;k<j;k++)
                    {
                         if(pfactor[j]==pfactor[k])
                              break;
                    }
                    if(j==k)
                    {
                         uni[y++]=pfactor[j];
                    }
               }
               long long int sum=0;
               for(j=0;j<y;j++)
               {
                    uni[j]=dsum(uni[j]);
                    sum+=uni[j];
               }
               num[i]=sum;
          }
          long long int sum1=0;
          for(i=0;i<n;i++)
          {
               sum1+=num[i];
          }
          cout<<sum1<<"\n";
          i++;
     }
     return 0;
}
