#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

	    long long int n,k;
	    cin>>n>>k;
	    long long int a[n];
	    for(long long int i=0;i<n;i++){
	        if(i<k){
	            a[i]=1;
	        }
	        if(i==k){
	            a[i]=k;
	        }
	        if(i>k){
	            a[i]=((2*a[i-1])-a[i-k-1])%(1000000007);
	        }
	    }
	    cout<<a[n-1]<<endl;

	return 0;
}
