#include<iostream>
#include<vector>

using namespace std;

int main()
{
     int t,i=0;
     cin>>t;

     while(i<t)
     {
          int n,j;
          cin>>n;
          vector <int> a(n);
          for(j=0;j<n;j++)
               cin>>a[j];

          int m;
          cin>>m;
          vector <int> b(m);
          for(j=0;j<m;j++)
               cin>>b[j];

          int flag=0;
          int k=0;
          for(j=0;j<n;j++)
               if(a[j]==b[k])
               k++;
          if((k==m)&&(n>m))
          cout<<"Yes\n";
          else
               cout<<"No\n";
          i++;
     }

}
