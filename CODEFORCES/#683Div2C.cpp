
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll n, w;
	cin >> n >> w;
	ll s = 0;
	std::vector<ll> v;
	std::vector<pair<ll, ll>> a  ;
	for (ll i = 0; i < n; i++)

	{
		ll x;
		cin >> x;
		a.push_back({x, i + 1});
		if (x >= (w + 1) / 2 && x <= w)
		{
			cout << 1 << endl;
			cout << i + 1;
			return;
		}


	}
	sort(a.begin(), a.end());


	for (ll i = n - 1; i >= 0; --i)
	{
		//	cout << a[i].first << " " << a[i].second << endl;
		if (a[i].first > w)continue;
		else if (a[i].first < (w + 1) / 2) {
			s += a[i].first;
			v.push_back(a[i].second);

		}
		if (s >= (w + 1) / 2 && s <= w)
		{
			cout << v.size() << endl;
			for (ll x : v)cout << x << " ";
			return;
		}
		//cout << s << " ";
	}

	cout << -1;

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
