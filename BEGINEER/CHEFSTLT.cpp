#include<iostream>
#include<string.h>
using namespace std;

int main()
{
     int t,i=0;
     cin>>t;

     while(i<t)
     {
          char s1[100],s2[100];
          cin>>s1>>s2;
          int j=0,l=strlen(s1),ma=l;
          int mi=0;
          for(;j<l;j++)
          {
               if((s1[j]==s2[j])&&(s1[j]!='?')&&(s2[j]!='?'))
                    ma--;
               if((s1[j]!='?')&&(s2[j]!='?')&&(s1[j]!=s2[j]))
                    mi++;
          }
          cout<<mi<<" "<<ma<<"\n";
          i++;
     }
}
