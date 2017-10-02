#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

int main()
{
     int t,i=0;
     cin>>t;

     while(i<t)
     {
          char ch[400];
          cin>>ch;
          int l=strlen(ch);
          vector <char> a(l);
          vector <char> b(l);
          int x=-1,y=-1;
          for(int j=0;j<l;j++)
          {
               if((ch[j]=='(')||(ch[j]=='+')||(ch[j]=='-')||(ch[j]=='*')||(ch[j]=='/')||(ch[j]=='^'))
               {     x+=1;
                    a[x]=ch[j];
               }
               else if(ch[j]!=')')
               {     y+=1;
                    b[y]=ch[j];
               }
               else
               {
                    y+=1;
                    b[y]=a[x];
                    x-=2;

               }

          }
          int z;
               for(z=0;z<=y;z++)
               cout<<b[z];
               cout<<"\n";
          i++;

     }
}
