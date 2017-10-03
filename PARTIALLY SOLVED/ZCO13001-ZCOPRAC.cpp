#include<iostream>
#include<vector>

using namespace std;

int main()
{
     float n,i,j;
     cin>>n;
     long long sum=0;
     vector <int> s(n);

     for(i=0;i<n;i++)
          cin>>s[i];

     for(i=0;i<n;i++)
     {
          for(j=i+1;j<n;j++)
          {
               if(s[i]>s[j])
                    sum+=s[i]-s[j];
               else
                    sum+=s[j]-s[i];
          }

     }
     cout<<sum<<"\n";

}
