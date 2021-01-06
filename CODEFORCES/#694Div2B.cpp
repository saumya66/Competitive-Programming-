
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll n, x;
	cin >> n >> x;
	std::vector<pair<ll, ll>> v ;
	ll s = 0;
	for (ll i = 0; i < n; i++)
	{
		ll x;
		cin >> x;
		v.push_back({x, 1});

	}
	ll ans = 0;
	for (ll i = 0; i < v.size(); i++)
	{
		if (v[i].first % x == 0)
		{
			v.push_back({v[i].first / x, v[i].second * x});
		}
		else break;
	}

	for (ll i = 0; i < v.size(); i++)
	{
		ans += v[i].first * v[i].second;
	}
	cout << ans;
	// for (ll x : v) {
	// 	cout << x << " ";
	// }
	// cout << accumulate(v.begin(), v.end(), 0);
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
