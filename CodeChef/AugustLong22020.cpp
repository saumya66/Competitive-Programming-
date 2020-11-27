
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	ll n, k;
	cin >> n >> k;
	std::vector<ll> v(n);
	for (ll &x : v)cin >> x;
	std::vector<ll> w;
	for (ll i = 0; i < n; i++) {
		if (v[i] <= k) {
			if (k % v[i] == 0)w.push_back(v[i]);
		}
	}
	if (w.empty())cout << "-1";
	else cout << *max_element(w.begin(), w.end());

}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	/*
	 #ifndef ONLINE_JUDGE
	 freopen("input.txt", "r", stdin);
	 freopen("output.txt", "w", stdout);
	 #endif
	*/
	ll t;
	cin >> t;
	while (t-- > 0)
	{
		solve();
		cout << "\n";
	}

	return 0;
}
