#include<iostream>
#include<vector>
using namespace std;


int main()
{

	int n,minx,maxx,x,range, y;
	int i=0;
	int cs=0;
	int cn=0;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>minx>>maxx;
		range = maxx- minx +1;
		vector<int> w(n);
		vector<int> b(n);
		for(int i=0; i<n; i++)
		{
			cin>>w[i]>>b[i];
		}
		x=minx;
		for(int i=0; i<n; i++)
			x=(x*w[i]+b[i])%2;

		y=minx+1;

		for(int i=0; i<n; i++)
			y=(y*w[i]+b[i])%2;

		if(x==0 && y==0)
			{
				cn=range;
				cs=0;
			}
		else if(x==1 && y==1)
			{
				cs=range;
				cn=0;
			}
		else if(x==0 && y==1)
		{
			if(range%2==0)
			{
				cn=range/2;
				cs=range/2;
			}
			else
			{
				cn=(range+1)/2;
				cs=(range-1)/2;
			}
		}
		else if(x==1 && y==0)
		{
			if(range%2==0)
				{
					cn=range/2;
					cs=range/2;
				}
			else
			{
				cn=(range-1)/2;
				cs=(range+1)/2;
			}
		}
		cout<<cn<<" "<<cs<<endl;
	}
	return 0;
}
