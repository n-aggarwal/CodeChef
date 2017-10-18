#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          long a[51];
          char c=' ';
          int i=0;

          while(c==' ')
          {
               scanf("%ld%c",&a[i++],&c);
          }

          for(int j=0;j<i;j++)
          {
               if(a[j]==i-1)
               {
                    a[j]=-1;
                    break;
               }
          }
          int max=-1;

          for(int k=0;k<i;k++)
          {
               if(max<a[k])
                    max=a[k];
          }
          cout<<max<<"\n";

     }
}
