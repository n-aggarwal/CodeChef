#include<bits/stdc++.h>

using namespace std;

int main()
{
     long n1,n2,n3,i,max=0;
     cin>>n1>>n2>>n3;

     long l1[n1],l2[n2],l3[n3];

     for(i=0;i<n1;i++)
     {
          cin>>l1[i];
          if(l1[i]>max)
               max=l1[i];
     }

     for(i=0;i<n2;i++)
     {
          cin>>l2[i];
          if(l2[i]>max)
               max=l2[i];
     }
     for(i=0;i<n3;i++)
     {
          cin>>l3[i];
          if(l3[i]>max)
               max=l3[i];
     }
     int flag[max+1];
     for(i=0;i<=max;i++)
          flag[i]=0;
     for(i=0;i<n1;i++)
          flag[l1[i]]++;

     for(i=0;i<n2;i++)
          flag[l2[i]]++;
     for(i=0;i<n3;i++)
          flag[l3[i]]++;
     long c=0;
     for(i=1;i<=max;i++)
          if(flag[i]>=2)
               c++;
     cout<<c<<"\n";
     for(i=1;i<=max;i++)
          if(flag[i]>=2)
               cout<<i<<"\n";
}

