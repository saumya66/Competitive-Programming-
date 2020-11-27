
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	ll n;
	cin >> n;
	ll tot = 4 * n - 1;
	set <ll>x, y;
	for (ll i = 0; i < tot; i++)
	{
		ll t1, t2;
		cin >> t1 >> t2;
		if (x.count(t1))
		{
			x.erase(t1);
		}
		else
		{
			x.insert(t1);
		}
		if (y.count(t2))
		{
			y.erase(t2);
		}
		else
		{
			y.insert(t2);
		}
	}
	set<ll>:: iterator it1 , it2, itr;
	it1 = x.begin();
	it2 = y.begin();
	cout << *it1 << " " << *it2;



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
