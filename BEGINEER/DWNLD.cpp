#include<iostream>
#include<vector>

using namespace std;

int main()
{
     int t,i=0;
     cin>>t;

     while(i<t)
     {
          int j,n,k;
          cin>>n>>k;

          vector <int> d(n);
          vector <int> t(n);

          for(j=0;j<n;j++)
               cin>>t[j]>>d[j];

          for(j=0;j<n;j++)
          {     if(k<=0)
                  break;
               if(k-t[j]>=0)
               {
                    k-=t[j];
                    t[j]=0;
               }
               else if(k>0)
               {
                    t[j]-=k;
                    k=0;
               }

          }
          int sum=0;

          for(j=0;j<n;j++)
              {
                   sum+=t[j]*d[j];

              }

          cout<<sum<<"\n";

               i++;


     }
}
