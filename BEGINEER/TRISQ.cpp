#include<iostream>
using namespace std;
int main()
{
	int t,i=0;
	cin>>t;
	while(i<t)
	{
		long sum=0, b;
		cin>>b;
		for(int i=1;i<=(b/2)-1;i++)
		{
			sum+=i;
		}
		cout<<sum<<"\n";
		i++;
	}
}
