#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int r,c;
          cin>>r>>c;

          char str[r][c];
          //int flag=0;
          bool flag=false;
          for(int i=0;i<r;i++)
          {
               cin>>str[i];
               for(int j=0;j<c-4;j++)
               {
                    //cout<<"!";
                    if((str[i][j]=='s'||str[i][j]=='S')&&(str[i][j+1]=='p'||str[i][j+1]=='P')&&(str[i][j+2]=='o'||str[i][j+2]=='O')&&(str[i][j+3]=='o'||str[i][j+3]=='O')&&(str[i][j+4]=='n'||str[i][j+4]=='N'))
                         flag = true;
               }
          }
          if(flag)
          {
               cout<<"There is a spoon!\n";
               continue;
          }
          for(int j=0;j<c;j++)
          {
               for(int i=0;i<r-4;i++)
               {
                    if((str[i][j]=='S'||str[i][j]=='s')&&
                       (str[i+1][j]=='P'||str[i+1][j]=='p')&&
                       (str[i+2][j]=='O'||str[i+2][j]=='o')&&
                       (str[i+3][j]=='O'||str[i+3][j]=='o')&&
                       (str[i+4][j]=='N'||str[i+4][j]=='n'))
                    {
                         flag=true;
                         break;
                    }
               }
          }
          if(flag)
               cout<<"There is a spoon!\n";
          else
               cout<<"There is indeed no spoon!\n";
     }
}
