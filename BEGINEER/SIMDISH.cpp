#include<iostream>
#include<vector>
#include<string.h>

struct c
{
     char s[20];
};

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          vector <c> s1(4);
          vector <c> s2(4);

          int i,j,k=0;

          for(i=0;i<4;i++)
               cin>>s1[i].s;
          for(i=0;i<4;i++)
               cin>>s2[i].s;

          for(i=0;i<4;i++)
          {
               for(j=0;j<4;j++)
               {
                    if(strcmp(s1[i].s,s2[j].s)==0)
                         k++;
               }
          }
          if(k>=2)
               cout<<"similar\n";
          else
               cout<<"dissimilar\n";
     }

}
