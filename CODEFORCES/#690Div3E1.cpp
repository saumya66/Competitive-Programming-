
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
std::vector<ll> v;


void solve()
{
	ll  n;
	cin >> n; ll s = 0;

	for (ll i = 0; i < n; i++)
	{
		ll x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());

	for ( ll i = 0; i < n - 2; i++)
	{
		ll a = v[i];
		a += 2;
		ll u = upper_bound(v.begin(), v.end(), a) - v.begin();
		--u;
		if (u - i > 1)
		{
			ll x = u - i - 1;
			s += ((x * (x + 1)) / 2);

		}
	}
	cout << s;
	v.clear();
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
