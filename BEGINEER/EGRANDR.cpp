#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll t;
	cin>>t;

	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n];
		ll sum=0,f=0,fu=0;

		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
			if(a[i]==2)
			f=1;
			if(a[i]==5)
			fu=1;
		}
		long double l = (sum*1.0)/n;

		if(l>=4 && f==0 && fu==1)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;


	}
	return 0;
}
