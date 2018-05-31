#include<bits/stdc++.h>
using namespace std;
main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		bool flag=false;
		for(int i=0,j=n-1;i<n/2,j>n/2;i++,j--)
		{
			if(a[i]>7 ||a[j]>7||a[0]!=1||a[n-1]!=1||a[n/2]!=7)
			{
				flag=true;
				break;
			}
			if((a[i]==a[j] &&(a[i+1]==a[i] || a[i+1]==a[i]+1) && (a[j-1]==a[j] || a[j-1]==a[j]+1)))
			{
				flag=false;
			}
			else
			{
				flag=true;
				break;
			}
		}
		if(flag==true)
			cout<<"no"<<endl;
		else
			cout<<"yes"<<endl;
	}
}
