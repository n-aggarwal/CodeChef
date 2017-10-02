#include<iostream>

using namespace std;

int main()
{
     int t,i=0;
     cin>>t;

     while(i<t)
     {
          int n,flag=0;
          cin>>n;

          char a[1000];
          cin>>a;

          for(int g=0;g<n;g++)
          {
               if(a[g]=='Y')
               {
                    flag=1;
               }
               if(a[g]=='I')
               {
                    flag=2;
                    break;
               }
          }
          if(flag==0)
          cout<<"NOT SURE\n";
          else if(flag==1)
          cout<<"NOT INDIAN\n";
          else
               cout<<"INDIAN\n";

          i++;
     }
}
