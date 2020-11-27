
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	vector<ll> sm, si;
	ll p = k + 1;
	queue<ll> ma, ir	;

	ll c = 0;
	for (ll i = 0; i < n; i++)
	{
		if (s[i] == 'M')
		{
			ma.push(i);

		}
		if (s[i] == 'I')ir.push(i);
		if (s[i] == 'X' || i == n - 1)

		{
			ll o, t;
			ll sh = 0, q;
			while (!ma.empty() && !ir.empty())
			{
				sh = 0;
				o = min(ma.front(), ir.front());
				t = max(ma.front(), ir.front());
				for (ll f = o; f <= t; f++)
				{
					if (s[f] == ':')
					{sh++;}

				}
				if (((k + 1) - abs(o - t) - sh) > 0)
				{
					ir.pop(); ma.pop(); ++c;
				}
				else if (ma.front() < ir.front())
				{
					ma.pop();
				}
				else  ir.pop();
			}
			while (!ir.empty())ir.pop();
			while (!ma.empty())ma.pop();
		}


	}
	cout << c;

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
