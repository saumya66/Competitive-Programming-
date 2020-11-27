
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{

	ll n;
	cin >> n;
	std::vector<ll> v;
	for (ll i = n  ; i >= 1; --i)
	{
		v.push_back(i);
	}
	if (n % 2 == 0)
	{
		for (ll x : v)cout << x << " ";
	}
	else {
		swap(v[n / 2], v[n - 1]);
		for (ll x : v)cout << x << " ";

	}
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
