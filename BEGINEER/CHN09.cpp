#include<iostream>
#include<string.h>

using namespace std;

int main()
{
     int t,i=0;
     cin>>t;

     while(i<t)
     {
          char ch[100];
          cin>>ch;
          int l=strlen(ch);
          int a=0,b=0;
          for(int j=0;j<l;j++)
          {
               if(ch[j]=='a')
                    a++;
               else
                    b++;
          }
          if(a>b)
               cout<<b<<"\n";
          else
               cout<<a<<"\n";
          i++;
     }
}
