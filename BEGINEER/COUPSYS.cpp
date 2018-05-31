#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int n;
          cin>>n;

          int arr[4]={};
          int city[4]={};

          for(int i=0;i<n;i++)
          {
               int c,l,d;
               cin>>c>>l>>d;
               if(d>arr[l])
               {
                    arr[l]=d;
                    city[l]=c;
               }
               if(d==arr[l]&&city[l]>c)
                    city[l]=c;
          }

          for(int i=1;i<4;i++)
               cout<<arr[i]<<" "<<city[i]<<"\n";

     }
}
