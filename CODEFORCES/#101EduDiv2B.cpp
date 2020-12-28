
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll a, b;
	cin >> a;

	ll s = 0, mx1 = 0, mx2 = 0;
	for (ll i = 0; i < a; i++)
	{
		ll x;
		cin >> x;
		s += x;
		mx1 = max(mx1, s);

	}
	cin >> b;
	s = 0;
	for (ll i = 0; i < b; i++)
	{
		ll x;
		cin >> x;
		s += x;
		mx2 = max(mx2, s);

	}
	cout << mx1 + mx2;


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
