
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> adj[2001];

ll mx = -1;
void dfs(ll s, ll lev)
{
	mx = max(mx, lev);
	for (ll i = 0; i < v[s].size(); ++i)
	{
		dfs( v[s][i], lev + 1);
	}

}


int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);


	ll n;
	cin >> n;

	for (ll i = 1; i <= n; ++i)
	{
		ll temp;
		cin >> temp;
		if (temp == -1)adj[0].push_back(i);
		else adj[temp].push_back(i);
	}
	for (ll i = 0; i < adj[0].size(); ++i)
	{
		dfs(v[0][i], 1);
	}
	cout << mx;

	cout << "\n";


	return 0;
}
