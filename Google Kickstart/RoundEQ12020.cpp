
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	ll n;
	cin >> n;
	std::vector<ll> v(n);
	for (ll &x : v)cin >> x;
	ll d = v[1] - v[0];
	ll c = 1, m = 0;
	for (ll i = 0; i < n - 1; i++)
	{
		if (v[i + 1] - v[i] == d)
		{
			d = v[i + 1] - v[i];
			++c;
			m = max(c, m);
		}
		else {
			d = v[i + 1] - v[i];
			c = 1;
			c++;
		}
	}
	cout  << m;

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
	while (t1++ < t) {
		cout << "Case #" << t1 << ":" << " ";
		solve();
		cout << endl;
	}

	return 0;
}
