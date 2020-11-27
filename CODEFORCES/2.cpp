
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	ll n;
	cin >> n;
	std::vector<ll> v;
	for (ll i = 0; i < n; ++i)
	{
		ll temp;
		cin >> temp;
		v.push_back(temp);
	}
	ll c = 0;
	for (ll i = 1; i < n - 1; ++i)
	{
		if (v[i] < v[i - 1] && v[i] > v[i + 1])
			++c;
	}
	cout << c;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
//	/*
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
//	*/
	ll t;
	cin >> t;
	while (t-- > 0)
	{
		solve();
		cout << "\n";
	}

	return 0;
}

