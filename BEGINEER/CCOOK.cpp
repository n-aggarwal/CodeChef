#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int n=0;

          for(int i=0;i<5;i++)
          {
               int k;
               cin>>k;
               n+=k;
          }
          string word[]={"Beginner", "Junior Developer", "Middle Developer", "Senior Developer", "Hacker", "Jeff Dean"};
          cout<<word[n]<<"\n";
     }
}
