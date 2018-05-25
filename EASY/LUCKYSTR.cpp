#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main()
{
     int n,k;
     cin>>k>>n;

     char luckyarr[k][50];
     int i;
     for(i=0;i<k;i++)
          cin>>luckyarr[i];
     for(i=0;i<n;i++)
     {
          char str[51];
          cin>>str;
          if(strlen(str)>=47)
          {
               cout<<"Good\n";
               continue;
          }
          int j;
          for(j=0;j<k;j++)
          {
               if(strstr(str,luckyarr[j])!=NULL)
               {
                    cout<<"Good\n";
                    break;
               }
          }
          if(j==k)
               cout<<"Bad\n";
     }
}
