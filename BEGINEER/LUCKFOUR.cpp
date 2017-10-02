#include<iostream>
#include<vector>
 
using namespace std;
 
int main()
{
	int t,i=0;
	cin>>t;
	vector <int> ans(t);
 
	while(i<t)
	{
	     long int a,z;
	     cin>>a;
	     int count=0;
	     do
	     {
	      	z=a%10;
	      	if(z==4)
	     {
	         count++;
	     }
          a=a/10;
	     }while(a>0);
	     ans[i] = count;
	     i++;
	}
	for (i=0 ; i<t ; i++)
	{ cout<<ans[i]<<" ";
	}
}