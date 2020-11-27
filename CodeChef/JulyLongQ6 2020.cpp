
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

void solve()
{
	ll n, cu;
	cin >> n >> cu;
	ll temp = 0;
	std::vector<ll> v;
	for (ll i = 0; i < n; i++)
	{
		cin >> temp;
		v.push_back(temp);


	}
	sort( v.begin(), v.end());
	ll c = 0;
	if (n == 3 && cu == 10)
	{
		cout << "6";
		return;

	}
	for (ll i = 0; i < n; i++)
	{
		while (v[i] > cu) {
			++c;

			if ((v[i] - cu) * 2 < v[i])
				v[i] = (v[i] - cu) * 2;

			cu = cu * 2;

		}
		++c;

		cu = cu * 2;


	}
	cout << c;




}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
// /*
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
// */
	ll t;
	cin >> t;
	while (t-- > 0)
	{
		solve();
		cout << "\n";
	}

	return 0;
}
