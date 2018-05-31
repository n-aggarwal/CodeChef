#include<bits/stdc++.h>

using namespace std;

int ceilSearch(long arr[], int low, int high, long x)
{
  int mid;

  if(x <= arr[low])
    return low;

  if(x > arr[high])
    return -1;

  mid = (low + high)/2;

  if(arr[mid] == x)
    return mid;

  else if(arr[mid] < x)
  {
    if(mid + 1 <= high && x <= arr[mid+1])
      return mid + 1;
    else
      return ceilSearch(arr, mid+1, high, x);
  }
  else
  {
    if(mid - 1 >= low && x > arr[mid-1])
      return mid;
    else
      return ceilSearch(arr, low, mid - 1, x);
  }
}
int main()
{
     int n;
     cin>>n;

     while(n)
     {
          int i;
          long arr[n];

          for(i=0;i<n;i++)
               cin>>arr[i];

          sort(arr,arr+n);
          int j;
          long count=0;
          for(i=0;i<n-2;i++)
          {
               for(j=i+1;j<n-1;j++)
               {
                    int k=ceilSearch(arr,j+1,n-1,arr[i]+arr[j]+1);
                    if(k!=-1)
                    {
                         if(arr[k]==arr[k-1])
                         {
                              while(arr[k-1]==arr[k])
                                   k--;
                         }
                         count+=n-k;
                    }
               }
          }
          cout<<count<<"\n";
          cin>>n;
     }
}
