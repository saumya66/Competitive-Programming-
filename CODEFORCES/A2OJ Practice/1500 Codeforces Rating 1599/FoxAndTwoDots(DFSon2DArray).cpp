
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
char a[55][55];
bool vis[55][55];
ll n, m;
void dfs(ll x, ll y , ll w, ll z )
{
	if (a[x][y] != a[w][z])
	{
		return ;
	}
	if (vis[x][y] == 1) {
		cout << "Yes";
		exit(0);

	}
	vis[x][y] = 1;
	if (x - 1 >= 0 && x - 1 != w)dfs(x - 1, y, x, y);
	if (y - 1 >= 0 && y - 1 != z)dfs(x, y - 1, x, y);
	if (x + 1 <= n && x + 1 != w)dfs(x + 1, y, x, y);
	if (y + 1 <= m && y + 1 != z)dfs(x, y + 1, x, y );

}

void solve()
{

	cin >> n >> m;
	for (ll i = 0; i < n; i++)
	{
		for (ll j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
	for (ll i = 0; i < n; i++)
	{
		for (ll j = 0; j < m; j++)
		{
			memset(vis, false, sizeof(vis));
			dfs(i , j, i, j);
		}
	}
	cout << "No";

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
