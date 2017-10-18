#include<bits/stdc++.h>

using namespace std;

int main()
{
     int te;
     cin>>te;

     while(te--)
     {
          int n;
          cin>>n;
          char s[501];
          cin>>s;

          int i,flag=0,f=0;

          for(i=0;i<strlen(s);i++)
          {
               if(s[i]=='H'&&f==0)
               {
                    f=1;
                    break;
               }
               else if(s[i]=='T'&&f==0)
               {
                    f=-1;
                    break;
               }
          }
          if(f==-1)
          {
               cout<<"Invalid\n";
               continue;
          }

          for(i=0;i<strlen(s);i++)
          {
               if(s[i]=='H')
                    flag++;
               else if(s[i]=='T')
                    flag--;

               if(flag>1||flag<0)
                    break;
          }
          if(flag!=0)
               cout<<"Invalid\n";
          else
               cout<<"Valid\n";
     }
}
