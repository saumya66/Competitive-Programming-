
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	ll r;
	cin >> r;
	ll pc = 0, pm = 0;
	ll cp = 0, mp = 0;
	while (r-- > 0)
	{
		ll c, m;
		ll sc = 0, sm = 0;

		cin >> c >> m;
		while (c != 0)
		{
			sc = sc + c % 10;
			c = c / 10;

		}
		while (m != 0)
		{
			sm = sm + m % 10;
			m = m / 10;

		}
		if (sc > sm)++cp;
		else if (sc < sm)++mp;
		else
		{
			++cp;
			++mp;
		}


	}
	if (cp > mp)
	{
		cout << "0" << " " << cp;
	}
	else if (cp < mp)
	{
		cout << "1" << " " << mp;
	}
	else
		cout << "2" << " " << cp;

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

