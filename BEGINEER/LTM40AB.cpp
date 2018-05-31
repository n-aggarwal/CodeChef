#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll a,b,c,d,s=0;
	    cin>>a>>b>>c>>d;
	    if(a>=d)
	        {
	            cout<<0<<endl;
	            continue;
	        }
	    for(ll i=a;i<=b && i<d;i++)
	    {
	        if(i>=c)
	        {
	            s+=(d-i);
	        }
	        else
	        {
	            s+=(d-c+1);
	        }
	    }
	    cout<<s<<endl;
	}
	return 0;
}

