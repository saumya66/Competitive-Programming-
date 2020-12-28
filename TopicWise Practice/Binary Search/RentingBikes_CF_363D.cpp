
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll n, m, a;
	cin >> n >> m >> a;

	std::vector<ll> mo(n);
	std::vector<ll> pr(m);
	for (ll &x : mo)cin >> x;
	for (ll &x : pr)cin >> x;
	sort(pr.begin(), pr.end());
	sort(mo.begin(), mo.end());
	ll j = 0, c = 0, s = 0;
	for (ll i = 0; i < m && j < n; i++)
	{
		ll bp = pr[i];
		ll f = 0;
		while (f == 0 && j < n)
		{

			cout << bp << " " << mo[j] << endl;
			if (mo[j] >= bp)
			{
				s += bp;
				f = 1;
				++c;
			}
			else {
				if (mo[j] + a >= bp)
				{
					++c;
					s += mo[j];
					a = a - (bp - mo[j]);
					f = 1;
				}
			}
			if (f == 0)++j;
			cout << s << endl;

		}
		if (j == n - 1)break;
	}
	cout << c << " " << s;
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


	return 0;
}
