#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int i;
		int a[n],b[n];
		for(i=0;i<n;i++){
			cin>>a[i]>>b[i];
		}
		int s=1;
		for(i=2;i<=n;i++){
			s=s^i;
		}
		cout<<s<<endl;
	}
	return 0;
}
