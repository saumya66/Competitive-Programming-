
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	ll n;
	cin >> n;
	std::vector< ll> v(n);
	for (ll &x : v)cin >> x;
	ll ans = 0;
	for (ll k = 1; k <= 2 * n; k++)
	{
		ll i = 0, j = n - 1, c = 0;
		while (i < j) {
			if (v[i] + v[j] == k) {
				c++;
				i++;
				j--;
			}
			else if (v[i] + v[j] < k) {
				i++;

			}
			else if (v[i] + v[j] > k) {
				j--;
			}
		}
		ans = max(ans , c);

	}
	cout << ans;
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
