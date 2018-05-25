#include<bits/stdc++.h>

using namespace std;

int main()
{
     int n;
     cin>>n;

     int arr[n],i;

     for(i=0;i<n;i++)
          cin>>arr[i];

     int length=0,maxlength=0;

     for(i=0;i<n;i++)
     {
          if(arr[i]!=0)
               length++;
          else
               length=0;
          if(maxlength<length)
               maxlength=length;
     }
     cout<<maxlength;
}
