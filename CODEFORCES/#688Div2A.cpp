
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll b, l;
	cin >> b >> l;
	std::set<ll> sb;
	for (ll i = 0; i < b; i++)
	{
		ll x;
		cin >> x;
		sb.insert(x);
	}
	ll c = 0;
	for (ll i = 0; i < l; i++)
	{
		ll x;
		cin >> x;
		if (sb.count(x))
		{
			++c;

		}
	}
	cout << c;

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

