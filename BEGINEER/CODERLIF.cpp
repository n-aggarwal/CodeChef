#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int k;
          int n=0;
          bool flag=false;
          for(int i=0;i<30;i++)
          {
               cin>>k;
               if(k==0)
                    n=0;
               else
                    n++;
               if(n>5)
                    flag=true;
          }
          if(flag)
               cout<<"#coderlifematters\n";
          else
               cout<<"#allcodersarefun\n";
     }
}
