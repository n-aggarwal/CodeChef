#include<iostream>
#include<vector>

using namespace std;

int main()
{    int t=0;
     while(t==0)
     {
          long n;
          cin>>n;
          if(n<1)
               break;
          vector <long> num(n+1);
          vector <long> num2(n+1);
          long i,j,flag=0;

          for(i=1;i<=n;i++)
               cin>>num[i];
          for(i=1;i<=n;i++)
          {
               for(j=1;j<=n;j++)
               {
                    if(num[j]==i)
                    {
                         num2[i]=j;
                         break;
                    }
               }
          }
          for(i=1;i<=n;i++)
          {
               if(num[i]!=num2[i])
               {
                    flag=1;
                    break;
               }
          }
          if(flag==0)
               cout<<"ambiguous\n";
          else
               cout<<"not ambiguous\n";
     }
}
