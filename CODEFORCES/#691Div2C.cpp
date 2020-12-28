
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll n, m;
	cin >> n >> m;

	std::vector<ll> a(n);
	for (ll &x : a)cin >> x;
	std::vector<ll> b(m);
	for (ll &x : b)cin >> x;
	sort(a.begin(), a.end());
	ll g = 0;
	for (ll i = 1; i < n; i++)
	{
		g = __gcd(g , a[i] - a[0]);
	}
	for (ll j = 0; j < m; j++)
	{
		ll ans = __gcd(g, a[0] + b[j]);
		cout << ans << " ";
	}

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

	solve();
	cout << "\n";

	return 0;
}
