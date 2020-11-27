
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
std::vector<int> adj[1001];

//std::vector<int> v;


void dfs(int x  , std::vector<bool> vis  )
{
	if (vis[x]) {
		//v.push_back(x + 1);
		cout << x + 1 << " ";
		return ;

	}
	vis[x] = true;
	for (int i = 0; i < adj[x].size(); i++)
	{

		dfs(adj[x][i], vis);
	}

}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	/*
	 #ifndef ONLINE_JUDGE
	 freopen("input.txt", "r", stdin);
	 freopen("output.txt", "w", stdout);
	*/
	ll n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		ll t;
		cin >> t;
		--t;
		adj[i].push_back(t);
	}

	for (int i = 0; i <   n; ++i)
	{
		std::vector<bool> vis(n, false);
		vis[ i  ] = true;

		dfs(adj[i][0] , vis);

	}

	return 0;
}
