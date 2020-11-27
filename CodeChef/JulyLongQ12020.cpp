
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	ll n;
	cin >> n;
	ll temp = 0;
	std::vector<ll> v;
	for (int i = 0; i < n  ; ++i)
	{
		cin >> temp;
		v.push_back(temp);

	}
	ll sum = 0;
	for (ll i = 0; i < n - 1; ++i)
	{
		if (v.at(i + 1) >= v.at(i))
		{
			sum = sum + abs(v.at(i + 1) - (v.at(i) + 1));
		}
		else
		{
			sum = sum + abs(v.at(i ) - (v.at(i + 1) + 1));
		}


	}
	cout << sum;
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
