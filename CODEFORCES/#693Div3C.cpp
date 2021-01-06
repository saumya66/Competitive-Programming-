
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll n;
	cin >> n;
	std::vector<ll> v(n);
	for (ll &x : v)cin >> x;
	ll ans = 0;
	std::vector<ll> dp(n);
	ll mx = 0;
	for (ll i = n - 1; i >= 0; --i)
	{
		dp[i] = v[i];
		ll j = i + v[i];
		if (j < n)
		{
			dp[i] += dp[j];

		}
	}
	cout << *max_element(dp.begin(), dp.end());


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
