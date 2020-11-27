
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll n, k;
	cin >> n >> k; ll st = -1;
	ll c = 1, p = 0;
	for (ll i = 0; i < n; i++)
	{
		ll x;
		cin >> x;
		if (i == 0) {
			st = x;
			p = x;
			continue;
		}
		if (p == x) {
			c = 1;
			st = x;
			continue;
		}
		else {
			p = x;
			c++;
		}
		if (c == k)
		{
			cout << st << " " << x;
			return;
		}

	}
	cout << -1 << " " << -1;
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
