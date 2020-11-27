
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll n; cin >> n;
	std::vector<ll> v(n);
	for (ll &x : v)cin >> x;
	sort(v.begin(), v.end(), greater<int>());
	if (n == 1) {
		cout << v[0];
		return;
	}
	ll mx = v[0], d = v[0] - v[1];
	for (ll i = 2; i < n; i++)
	{
		if (v[i] > d) {

			d = v[i] - d;
			mx += d;

		}
		else {
			d = d - v[i];
		}
	}
	cout << mx;
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
