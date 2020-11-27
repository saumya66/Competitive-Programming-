
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(ll t)
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
	ll ma = 0, c = 0;
	for (ll i = 0; i < n; i++)
	{
		if (i == 0)
		{
			if (v[i] > v[i + 1])++c;
		}
		else if (i < n - 1)
		{
			if (v[i] > ma && v[i] > v[i + 1])++c;
		}
		else if (i == n - 1)
		{
			if (v[i] > ma)c++;
		}
		ma = max(ma , v[i]);

	}


	cout << "Case #" << t << ":" << " " << c;


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
	ll t1 = 0;
	while (t1++ < t)
	{
		solve(t1);
		cout << "\n";
	}

	return 0;
}
