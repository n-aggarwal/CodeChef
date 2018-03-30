#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n;
     cin>>n;

     int arr[n+1],i;
     for(i=1;i<=n;i++)
          cin>>arr[i];

     string out[1000];
     int outpos=0;
     while(true)
     {
          for(i=1;i<=n;i++)
               if(arr[i]!=-1)
                    break;
          if(i==n+1)
               break;
          while(arr[i]!=-1)
          {
               //cout<<out[outpos]<<" ";
               int d=arr[i];
               arr[i]=-1;
               stringstream ss;
               ss<<i;
               out[outpos]+=ss.str();
               out[outpos]+=" ";
               i=d;
               //cout<<out[outpos]<<" ";
          }
          //cout<<"$";
          stringstream ss;
          ss<<i;
          out[outpos]+=ss.str();
          outpos++;
          //cout<<"%";
     }
     cout<<outpos<<"\n";
     for(i=0;i<outpos;i++)
          cout<<out[i]<<"\n";

}
