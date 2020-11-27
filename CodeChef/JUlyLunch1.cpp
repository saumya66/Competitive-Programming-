
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	ll n, s;
	cin >> n >> s;
	string st;

	for (ll i = 0; i < n; i++)
	{
		ll d;
		cin >> d;
		if (d % s == 0)st = st + "1"; else st = st + "0";
	}
	cout << st;

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

