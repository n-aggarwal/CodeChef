#include<iostream>
#include<string.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          char ch[150];
          cin>>ch;
          int l=strlen(ch);

          if(ch[l-1]=='1')
               cout<<"WIN\n";
          else
               cout<<"LOSE\n";
     }
}
