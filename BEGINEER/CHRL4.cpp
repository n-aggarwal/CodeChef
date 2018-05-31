#include <bits/stdc++.h>

#define sni(x) scanf("%lld",&x)
#define pni(x) printf("%lld\n",x)
#define pb push_back
#define mp make_pair

#define IOS ios::sync_with_stdio(false); cin.tie(0);
#define ll long long int
#define mod 1000000007
#define fr(i,a,b) for(long long int i=a;i<b;i++)
using namespace std;

int main() {

    ll n , k ;
    cin>>n>>k;

    ll arr[n];
    ll i ;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    set <pair <double,ll>> s ;

    double dp[n+1] ;
    ll answer[n+1] ;
    dp[0] = log(arr[0]);
    answer[0] = arr[0];
   // ll answer[n+1] ;

    s.insert(mp(dp[0],0));

    for(i=1;i<=min(k,n-1);i++){

        dp[i] = log(arr[i]) + (*s.begin()).first ;
        answer[i] = (arr[i]*answer[(*s.begin()).second])%mod ;

        s.insert(mp(dp[i],i));
    }
    for(i=k+1;i<n;i++){

        pair <double,ll> p = mp(dp[i-k-1],i-k-1);
        s.erase(s.find(p)) ;

        dp[i] = log(arr[i]) + (*s.begin()).first ;
        answer[i] = (arr[i]*answer[(*s.begin()).second])%mod ;

        s.insert(mp(dp[i],i));
    }

    cout<<answer[n-1]<<"\n";

	return 0;
}

