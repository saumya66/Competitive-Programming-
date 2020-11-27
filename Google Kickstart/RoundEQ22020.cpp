
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	ll n, a, b, c;
	cin >> n >> a >> b >> c;
	list <ll > l;
	ll nd = n;

	if (a == n && b == n && c < n)cout << "IMPOSSIBLE";
	else if (c > a || c > b)cout << "IMPOSSIBLE";
	else
	{
		while (c > 0)
		{
			l.push_back(n);
			--a;
			--b;
			--c;
		}
		while (a > 0)
		{
			l.push_front(--n);
			--a;

		}
		ll si = nd - b - l.size();
		ll y = 1;
		while (si > 0)
		{
			l.push_back(y++);
			--si;

		}
		while (b > 0)
		{
			l.push_back(--n);
			--b;

		}
		for (ll x : l )
			cout << x << " ";
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
	ll t1 = 0;
	while (t1++ < t) {
		cout << "Case #" << t1 << ":" << " ";
		solve();
		cout << endl;
	}

	return 0;
}
