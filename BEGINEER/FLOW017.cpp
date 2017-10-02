#include<iostream>

long int mx(long int a,long int b,long int c)
{
     long int m=0;
     if(m<a)
          m=a;
     if(m<b)
          m=b;
     if(m<c)
          m=c;
     return m;
}

long int mx(long int a,long int b)
{
     long int m=0;
     if(m<a)
          m=a;
     if(m<b)
          m=b;
     return m;
}


using namespace std;

int main()
{
     int t,i=0;
     cin>>t;

     while(i<t)
     {
          long int a,b,c;
          cin>>a>>b>>c;
          if(a==mx(a,b,c))
                  {
                       cout<<"\n"<<mx(b,c);
                  }
          else if(b==mx(a,b,c))
                  {
                       cout<<"\n"<<mx(a,c);
                  }
          else if(c==mx(a,b,c))
                  {
                       cout<<"\n"<<mx(a,b);
                  }

          i++;
     }
}
