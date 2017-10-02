#include<iostream>
#include<string.h>

using namespace std;
long ma(long a,long b)
{
     if(a>b)
          return a;
     else
          return b;
}

long f(char s[])
{
     long blance=0,max_blance=0;
     for(int i=0;i<strlen(s);i++)
     {
          if(s[i]=='(')
               blance++;
          else if(s[i]==')')
               blance--;
          max_blance=ma(blance,max_blance);

     }
     return max_blance;
}
int main()
{
     int t,i=0;
     cin>>t;

     while(i<t)
     {
          char a[100000];
          cin>>a;

          long k=f(a),j=0;
          for(;j<k;j++)
               cout<<"(";
          for(j=0;j<k;j++)
               cout<<")";

          cout<<"\n";
          i++;
     }
}

