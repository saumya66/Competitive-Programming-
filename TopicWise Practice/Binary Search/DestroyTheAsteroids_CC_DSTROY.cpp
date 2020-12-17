
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll n, k;
	cin >> n >> k;
	ll v[n];	ll sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		sum += v[i];
	}
	ll l = 0, r = 1e18;
	ll s = 0, m = 0;
	while (l + 1 < r)
	{
		s = 0;
		m = (l + r) / 2;
		for (ll i = 0; i < n; i++)
		{
			if (v[i] <= m)
			{
				s += v[i];

			}
			else {
				s += m;
			}

		}
		if ((s / m) >= k)
		{
			l = m;
		}
		else {
			r = m;
		}

	}
	cout << l;
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
