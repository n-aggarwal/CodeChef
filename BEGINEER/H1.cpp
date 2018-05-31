#include <bits/stdc++.h>
	using namespace std;

#define ll long long int

map<ll,ll> solution;
queue<ll> q;
map<ll,ll> vec;
vector<ll> printable;
int xaxis[] = {0,1};
int yaxis[] = {1,0};
ll tens[10];

ll change (ll num, int i) {
}

void print () {
	vector<ll>::iterator i;
	for (i = printable.begin(); i != printable.end(); i++) {
		cout << solution[*i] << endl;
	}
}

int getpos (ll num, int i, int j) {
	return (3*i+j);
}

int getnum (ll num, int pos) {
	ll temp = num/tens[pos];
	return (temp%10);
}

bool prime (int num1, int num2) {
	int num = num1+num2;
	if (num == 2 || num == 3 || num == 5 || num == 7 || num == 11 || num == 13 || num == 17)
		return true;
	return false;
}

ll exchange (ll num, int pos1, int pos2, int num1, int num2) {
	int back = num%tens[pos1];
	int front = num/tens[pos1+1];
	int temp = front*10 + num2;
	temp = temp*tens[pos1] + back;
	back = temp%tens[pos2];
	front = temp/tens[pos2+1];
	temp = front*10 + num1;
	temp = temp*tens[pos2] + back;
	return temp;
}

void solve () {
	q.push (123456789);
	vec[123456789] = 1;
	while (!q.empty()) {
		ll num = q.front();
		q.pop();
		for (int i=0; i<3; i++) {
			for (int j=0; j<3; j++) {
				int pos1 = getpos (num,i,j);
				int num1 = getnum (num,pos1);
				//cout << "Pos1&Num1 " << pos1 << " " << num1 << endl;
				for (int k = 0; k<2; k++) {
					int x = i+xaxis[k];
					int y = j+yaxis[k];
					if (x > 2 || y > 2)
						continue;
					int pos2 = getpos (num,x,y);
					int num2 = getnum (num,pos2);
					//cout << "Pos2&Num2 " << pos2 << " " << num2 << endl;
					if (!prime (num1,num2))
						continue;
					int b = exchange (num,pos1,pos2,num1,num2);
					if (vec[b] != 1) {
						//cout << b << endl;
						solution[b] = solution[num]+1;
						q.push (b);
						vec[b] = 1;
					}
				}
			}
		}
	}

	print();
}

int main () {
	ll t;
	cin >> t;
	while (t--) {
		int a = 0;
		int t = 0;
		for (int i=0; i<9; i++) {
			cin >> a;
			t = t*10+a;
		}
		solution[t] = -1;
		printable.push_back (t);
	}
	tens[0] = 1;
	for (int i=1; i<10; i++)
		tens[i] = 10*tens[i-1];
	solution[123456789] = 0;
	solve();
	return 0;
}
