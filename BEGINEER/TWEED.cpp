#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        string p;
        cin>>n>>p;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n==1 && p=="Dee" && a[0]%2==0)
        {
            cout<<"Dee\n";
        }
        else
        {
            cout<<"Dum\n";
        }
    }
	return 0;
}
