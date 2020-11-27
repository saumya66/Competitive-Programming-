
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> ans(400001) ;
bool vis[400001];


void dfs(  ll node, ll arrival, map<ll, pair<ll, ll>> m , ll tn, vector<ll> adj[400001])
{
	ll c = min(m[tn].first, m[node].second);
	m[node].second = m[node].second - c;
	if (m[node].second <= 0)ans.push_back(tn);
	else if (m[node].second > 0)ans.push_back(-1);

	for (int i = 0; i < adj[node].size(); i++) {
		if ((adj[node][i] != arrival) && (vis[i] == false))
			dfs( adj[node][i], node, m , tn, adj);
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
	ll t;
	cin >> t;
	while (t-- > 0)
	{
		ans.clear();
		std::vector<ll> adj[400001];
		ll n;
		cin >> n;
		ll u, v;
		std::map<ll, pair<ll, ll>> m;
		ll  p[n], a[n], b[n];

		for (ll i = 0; i < n - 1; i++) {
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);

		}

		for (ll i = 0; i < n; i++)
		{
			cin >> p[i];
		}
		for (ll i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (ll i = 0; i < n; i++)
		{
			cin >> b[i];
		}
		for (ll i = 0; i < n; ++i)
		{
			m.insert(make_pair(p[i], make_pair(a[i], b[i])));
		}
		memset (vis, false , sizeof(vis));

		for (ll i = 1; i <= n; i++) {

			ll tn = i;

			dfs(i, 0, m, tn, adj);
			vis[i] = true;

		}
		for (ll x : ans)
			cout << x << " ";


		for (ll i = 0; i < n; i++) {

			memset (adj, 0, sizeof(adj));

		}

		cout << "\n";
	}

	return 0;
}





#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


bool vis[400001];



void dfs(  ll node,  map<ll, pair<ll, ll>> m , ll tn, vector<ll> adj[], bool visited[], map<ll, ll>ans)
{
	visited[node] = 1;
	ll c = min(m[tn].first, m[node].second);
	m[node].second = m[node].second - c;
	if (m[node].second <= 0)ans[tn] = 0;
	else if (m[node].second > 0)ans[tn] = -1;

	for (int i = 0; i < adj[node].size(); i++) {
		if (  (vis[i] == false) && (visited[adj[node][i]] == false) )
			dfs( adj[node][i],  m , tn, adj, visited, ans);
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
	ll t;
	cin >> t;
	while (t-- > 0)
	{
		map<ll, ll > ans  ;
		std::vector<ll> adj[400001];
		ll n;
		cin >> n;
		ll u, v;
		std::map<ll, pair<ll, ll>> m;
		ll  p[n], a[n], b[n];

		for (ll i = 0; i < n - 1; i++) {
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);

		}

		for (ll i = 0; i < n; i++)
		{
			cin >> p[i];
		}
		for (ll i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (ll i = 0; i < n; i++)
		{
			cin >> b[i];
		}
		for (ll i = 0; i < n; ++i)
		{
			m.insert(make_pair(p[i], make_pair(a[i], b[i])));
		}
		memset (vis, false , sizeof(vis));
		bool visited[400001] ;

		for (ll i = 1; i <= n; i++) {

			memset (visited, false , sizeof(visited));
			ans.insert(make_pair(i, 0));
			ll tn = i;

			dfs(i,   m, tn, adj, visited , ans);
			vis[i] = true;

		}
		map<ll, ll>::iterator it;
		for (it = ans.begin(); it != ans.end(); it++)
			cout << it->first << " " << it->second << "  ";


		for (ll i = 0; i < n; i++) {

			memset (adj, 0, sizeof(adj));

		}

		cout << "\n";
	}

	return 0;
}
