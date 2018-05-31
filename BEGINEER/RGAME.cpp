#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
#define pb push_back
#define mp make_pair
#define f first
#define s second

ll modexpo(ll a , ll b)
{
    ll res = 1;
    while(b > 0)
    {
        if(b&1)
            res = (res*a)%mod;
        a=(a*a)%mod;
        b >>=1;
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    vector<ll> foo(100005 , 0);
    foo[0] = 1;
    for (int i = 1 ; i < 100005 ; i++)
        foo[i] = (2*foo[i - 1])%mod;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n + 1 , 0);
        for (int i = 0 ; i <= n ; i++)
            cin >> arr[i];
        ll temp=0;
        ll ans=0;
        for (int i = 1 ; i <= n ; i++)
            temp = (temp%mod + (foo[n - i + 1]*arr[i])%mod)%mod;
        for (int i = 0 ; i < n ; i++)
        {
            ans = (ans%mod + (temp*arr[i])%mod)%mod;
            //cout << ans << " " << i << " " << temp << endl;
            if (i >= 1)
            {
                temp = (temp%mod + mod - (foo[n - 1]*arr[i + 1])%mod)%mod;
                temp = (temp*2)%mod;
            }
            else
                temp = (temp%mod + mod - (foo[n - i]*arr[i + 1])%mod)%mod;
        }
        cout << ans << endl;
    }
    return 0;
}
