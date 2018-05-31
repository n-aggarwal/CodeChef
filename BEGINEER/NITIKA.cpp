#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;
     cin.ignore();
     while(t--)
     {
          char str[50];
          cin.getline(str,50);

          int i,cs=0;
          int csi1,csi2;
          for(i=0;i<strlen(str);i++)
          {
               if(str[i]==' '&&cs==0)
               {
                    csi1=i;
                    cs++;
               }
               else if(str[i]==' '&&cs==1)
               {
                    csi2=i;
                    cs++;
                    break;
               }
          }
          int sf;
          if(cs==0)
               sf=0;
          else if(cs==1)
          {
               sf = csi1+1;
               cout<<(char)toupper(str[0])<<". ";
          }
          else if(cs==2)
          {
               sf = csi2+1;
               cout<<(char)toupper(str[0])<<". "<<(char)toupper(str[csi1+1])<<". ";
          }
          cout<<(char)toupper(str[sf]);
          for(i=sf+1;i<strlen(str);i++)
               cout<<(char)tolower(str[i]);
          cout<<"\n";
     }
}
