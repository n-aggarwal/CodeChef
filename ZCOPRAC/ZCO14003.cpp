#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
     long long int n;
     cin>>n;

     vector <long long int> a(n);
     long long i=0;

     for(i=0;i<n;i++)
          cin>>a[i];

     sort(a.begin(),a.end());

     long long ma=0;

     for(i=0;i<n;i++)
     {
          if(ma<a[i]*(n-i))
               ma=a[i]*(n-i);
     }
     cout<<ma<<"\n";
}

