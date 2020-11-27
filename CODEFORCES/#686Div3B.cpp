
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll n;
	cin >> n;
	std::vector<ll> v;
	map<ll, ll> c;
	for (ll i = 0; i < n; i++)
	{
		ll x;
		cin >> x;
		c[x]++;
		v.push_back(x);

	}
	ll ans = 0;
	ll m = 1e9;
	for (ll i = 0; i < n; i++)
	{
		//cout << c[v[i]] << " ";
		if (c[v[i]] > 1)
		{
			continue;

		}
		else if (v[i] < m) {
			ans = i + 1;
			m = v[i];
		}
	}
	if (m == 1e9)
	{
		cout << "-1";
		return;
	}
	cout << ans;

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

