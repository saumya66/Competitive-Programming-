
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//std::vector<ll> adj[1001];
ll arg(std::vector<ll> v, ll i, ll j)
{
	set<ll> s ;

	for (ll a = i; a >= j; --a)
	{
		s.insert(v[a]);
	}
	return 2 * ((i - j + 1) - s.size());
}

void solve()
{
	ll n , k;
	std::vector<ll > v;
	cin >> n >> k;

	for (ll i = 1; i <= n; i++) {
		ll f;
		cin >> f;
		v.push_back(f);
	}
	int dp[n + 1];
	dp[0] = 0;
	for (int i = 1; i < = n; i++) {
		dp[i] = dp[i - 1] + k;
		for (int j = i - 1; j >= 1; --j)
		{
			dp[i] = min(dp[i], dp[j - 1] + k + arg(v, i, j));
		}
	}
	cout << dp[n];



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
