
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
std::vector<ll> adj[2001];
vector<bool>visited(2001, false) ;
ll c = 1;

void dfs(ll x , ll lev)
{
	c = max(c, lev);
	if (visited[x])return;
	visited[x] = true ;
	for (ll i = 0; i < adj[x]. size(); i++)
	{
		dfs(adj[x][i], lev + 1);

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
	ll n;
	cin >> n;
	for (ll i = 1; i <= n; i++) {
		ll t;
		cin >> t;

		if (t == -1)adj[0].push_back(i);
		else
			adj[t].push_back(i);
	}


	for (ll i = 0; i < adj[0].size(); i++)
	{
		dfs (adj[0][i], 1);
	}
	cout << c;





	return 0;
}
