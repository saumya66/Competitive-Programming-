
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


bool comp(const pair<ll, ll> & a, const pair<ll, ll> &b)

{
	return a.second < b.second;

}
void solve()
{
	ll n;
	cin >> n;

	std::vector<pair<ll, ll>> v;
	for (ll i = 0; i < n; i++)
	{
		ll t1, t2;
		cin >> t1 >> t2;
		v.push_back(make_pair(t1, t2));
	}
	sort(v.begin(), v.end(), comp);
	ll curend = 0, c = 0;

	for (auto x : v)
	{
		if (x.first >= curend)
		{
			c++;
			curend = x.second;
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
	solve();
	cout << "\n";

	return 0;
}
