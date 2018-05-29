#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;
     cin.ignore();
     while(t--)
     {
          char s[20];
          cin.getline(s,20);

          if(strlen(s)!=5)
          {
               cout<<"Error\n";
               continue;
          }
          int i;
          for(i=0;i<5;i++)
          {
               if((i==0||i==3)&&(s[i]<97||s[i]>104))
                    break;
               if((i==1||i==4)&&(s[i]<49||s[i]>56))
                    break;
               if(i==2&&s[i]!='-')
                    break;
          }
          if(i!=strlen(s))
          {
               cout<<"Error\n";
               continue;
          }
          if(abs(s[0]-s[3])==1&&abs(s[1]-s[4])==2)
          {
               cout<<"Yes\n";
               continue;
          }
          if(abs(s[0]-s[3])==2&&abs(s[1]-s[4])==1)
          {
               cout<<"Yes\n";
               continue;
          }
          cout<<"No\n";
     }
}
