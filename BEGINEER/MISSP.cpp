#include<iostream>
#include<vector>

using namespace std;

int main()
{
     int t,i=0;
     cin>>t;

     while(i<t)
     {
          unsigned long int n,j=0,g=0,q=0;
          cin>>n;
          vector <unsigned long int> a(n+1);
          for(j=1;j<=n;j++)
               cin>>a[j];
          unsigned long int ma=a[1];
          for(j=1;j<=n;j++)
          {if(ma<a[j])
             {ma=a[j];}
          }

          long int A[ma];
               for(j=1;j<=ma;j++)
               {A[j]=0;
               }
          for(j=1;j<=n;j++)
               {A[a[j]]+=1;
               }
          for(j=1;j<=ma;j++)
          {if(A[j]%2!=0)
               {cout<<j<<"\n";}
          }

          i++;

     }
}
