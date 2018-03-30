#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}

int Rem(string b,int a)
{
     int i,r=0;

     for(i=0;i<b.length();i++)
     {
          r=r*10+ b[i]-'0';
          r%=a;
     }
     return r;
}

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int a;
          string b;
          cin>>a;
          cin>>b;
          if(a==0)
          cout<<b<<"\n";
          else
          cout<<gcd(a,Rem(b,a))<<"\n";
     }
}
