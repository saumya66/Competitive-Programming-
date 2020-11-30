#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
ll n, c;
std::vector<ll> v ;
bool check(ll g)
{
	ll prev = v[0];
	ll cn = 1;
	for (ll i = 1; i < n; i++)
	{
		if ((v[i] - prev) >= g)
		{
			cn++;
			if (cn == c)
				return true;

			prev = v[i];

		}
	}
	return false ;
}

void solve()
{
	cin >> n >> c;
	v.clear();
	for (ll i = 0; i < n; i++)
	{
		ll x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	ll p = 0;
	ll l = 0, h = 1000000000, mid = 0;
	while (l <= h)
	{
		mid = (l + h) / 2;
		if (check(mid))
		{
			l = mid + 1;
			p = mid;
		}
		else
			h = mid - 1;

	}
	cout << p;
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

