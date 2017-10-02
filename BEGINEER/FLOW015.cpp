#include<iostream>
#include<vector>

using namespace std;

int main()
{
     int t,i=0;
     cin>>t;
     vector <int> ans(t);

     while(i<t)
     {    int y;
          cin>>y;
          int x,z=0;
          if(y>2001)
          {    x=y-1;
               for(;x>2001;x--)
               {
                    if((x%4==0)&&(x%100!=0))
                         z++;
                    else if(x%400==0)
                         z++;
               }
               y=y-2001;
               x=y+z;
               for(;x>7;)
               {
                    x-=7;
               }
               if(x==7)
                    ans[i]=1;
               else if(x==1)
                    ans[i]=2;
               else if(x==2)
                    ans[i]=3;
               else if(x==3)
                    ans[i]=4;
               else if(x==4)
                    ans[i]=5;
               else if(x==5)
                    ans[i]=6;
               else if(x==6)
                    ans[i]=7;
          }
          else if(y==2001)
          {
               ans[i]=1;
          }
          else
          {    z=0;
               for(x=y;x<=2001;x++)
               {
                    if((x%4==0)&&(x%100!=0))
                         z++;
                    else if(x%400==0)
                         z++;
               }
               y=2001-y;
               x=y+z;
               for(;x>7;)
               {
                    x-=7;
               }
               if(x==7)
                    ans[i]=1;
               else if(x==6)
                    ans[i]=2;
               else if(x==5)
                    ans[i]=3;
               else if(x==4)
                    ans[i]=4;
               else if(x==3)
                    ans[i]=5;
               else if(x==2)
                    ans[i]=6;
               else if(x==1)
                    ans[i]=7;

          }
          i++;
     }
     cout<<"\n";
     for(i=0;i<t;i++)
     {
          if(ans[i]==1)
               cout<<"monday\n";
          else if(ans[i]==2)
               cout<<"tuesday\n";
          else if(ans[i]==3)
               cout<<"wednesday\n";
          else if(ans[i]==4)
               cout<<"thursday\n";
          else if(ans[i]==5)
               cout<<"friday\n";
          else if(ans[i]==6)
               cout<<"saturday\n";
          else if(ans[i]==7)
               cout<<"sunday\n";
     }
}
