#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, k, s;
		cin>>n>>k>>s;
		int tot = k * s;
		int open_days = s - (s / 7);
		if((tot > n * open_days) or (s >= 7 and (n - k)*6 < k))	cout<<"-1\n";
		else {
			int ans = tot / n;
			if((tot % n) != 0)	ans++;
			cout<<ans<<'\n';
		}
	}
}
