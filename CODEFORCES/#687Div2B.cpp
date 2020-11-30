
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll  n, k;
	cin >> n >> k;
	std::vector<ll> v(n);
	for (ll &x : v)
	{
		cin >> x;

	} ll cn = 0, ans = 1e9;
	for (ll c = 1; c <= 100; c++)
	{
		cn = 0;
		for (ll i = 0; i < n;)
		{
			if (v[i] != c) {
				++cn;
				i += k;
			}
			else {i++; continue;};
		}
		ans = min(ans, cn);
	}

	cout << ans;
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
