
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
ll M = 1000000007;




void solve()
{
	ll n, m;
	cin >> n >> m;
	set<ll> se[m]; std::vector<string> vs(n);
	for (string &x : vs)cin >> x;
	ll k = 1;
	for (ll j = 0; j < n; j++) {
		string s = vs[j];

		for (ll i = 0; i < m; i++)
		{
			se[i].insert(s[i]);
		}
	}
	for (ll i = 0; i < m; i++)
	{
		k = (( k % M) * (se[i].size() % M)) % M;
	}
	cout << k % M;

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



