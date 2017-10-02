#include<iostream>
#include<string.h>
#include<stdio.h>
#include<cstdio>
using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          char ch[200];
          cin>>ch;

          int k=1,l=strlen(ch);
          int i,j;
          char str[2];
          for(i=0;i<2;i++)
          {
               if(ch[i]==ch[i+1])
               {
                    k=0;
                    break;
               }
               else
                    str[i]=ch[i];
          }
          if(l%2!=0)
          {
               if(ch[l-1]==ch[0])
                    l--;
          }
          for(i=0;i<l;)
          {
               if((ch[i]==str[0])&&(ch[i+1]==str[1]))
                  {
                      i+=2;
                  }
                  else
                    {
                         k=0;
                         break;
                    }

          }
          if(k==0)
               cout<<"NO\n";
               else
               cout<<"YES\n";
     }
}
