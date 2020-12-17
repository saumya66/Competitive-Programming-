//https://codeforces.com/problemset/problem/975/C

#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll n, q;
	cin >> n >> q;
	std::vector<ll> a(n), qu(q);
	for (ll & x : a)cin >> x;
	int s = 0;
	for (ll &x : qu)cin >> x;
	int	c = n;
	for (ll i = 0, j = 0; i < q; i++)

	{
		ll cmd = qu[i];

		while (s + a[j] <= cmd && j < n)
		{
			s += a[j];
			++j;
			--c;
			if (c == 0 || j == n - 1)
			{
				c = n;
				j = 0;
				s = 0;
			}

		}
		cout << c << endl;
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

	solve();
	cout << "\n";


	return 0;
}

