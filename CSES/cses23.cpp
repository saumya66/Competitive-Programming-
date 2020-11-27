
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	ll n, s;
	cin >> n >> s;
	std::map<ll, ll> map;
	ll f = 0;
	for (ll i = 1; i <= n; i++)
	{
		ll a = 0;
		cin >> a;

		if (map.find(s - a) != map.end())
		{
			cout << map[s - a] << ' ' << i;
			f = 1; break;
		}
		else
		{
			map[a] = i;
		}
	}
	if (f == 0)
		cout << "IMPOSSIBLE";


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
