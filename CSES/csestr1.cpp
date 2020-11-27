
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
std::vector<ll> adj[200001];

//std::vector<bool> vis(200001) ;
ll c;
ll dp[200001];

void dfs(ll x, ll p )
{
	dp[x] = 1;
	for (ll c : adj[x])
	{

		if (c == p )continue;
		dfs(c, x);
		dp[x] += dp[c];
	}
}

void solve()
{
	ll n;
	cin >> n;
	for (ll i = 2; i <= n; ++i)
	{
		ll t;
		cin >> t;
		adj[t].push_back(i);
		adj[i].push_back(t);
	}
	dfs(1, 0);
	for (ll i = 1; i <= n; i++)
	{
		cout << dp[i] - 1 << " ";
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



	return 0;
}
