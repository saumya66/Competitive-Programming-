
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(string s, ll n) {
	ll a = 0 , b = 0;
	for (ll i = 0; i < n; i++) {
		if (s [i] == 'A')++a;
		else ++b;
	}
	//cout << a << " " << b << endl;
	if (a == n || b == n)cout << "N";
	else if (abs(b - a) > 2)cout << "N";
	else cout << "Y";



}
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	ll t;
	cin >> t;
	ll t1 = 0;
	while (t1++ < t) {
		cout << "Case #" << t1 << ":" << " ";

		ll n;

		cin >> n;
		string s;
		cin >> s;
		solve(s, n);
		cout << "\n";


	}

	return 0;
}
