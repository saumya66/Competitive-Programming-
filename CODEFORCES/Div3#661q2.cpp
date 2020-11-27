
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	ll n;
	cin >> n;
	std::vector<ll> a(n), b(n);
	for (ll &x : a)cin >> x;
	for (ll &x : b)cin >> x	;
	ll ma = *min_element(a.begin(), a.end());
	ll mb =	*min_element(b.begin(), b.end());
	ll c = 0;


	for (ll i = 0; i < n; i++)
	{


		if (a[i] > ma && b[i] > mb) {
			int m = min(a[i], b[i]);
			if (m == a[i]) {
				c = c + (m - ma);
				a[i] = a[i] - (m - ma);
				b[i] = b[i] - (m - ma);

			}

			else {
				c = c + (m - mb);
				b[i] = b[i] - (m - mb);
				a[i] = a[i] - (m - mb);
			}

		}
		if ( a[i] > ma)
		{
			c = c + (a[i] - ma);
		}
		if (   b[i] > mb )
		{
			c = c + (b[i] - mb);
		}

	}
	cout  << c;
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
