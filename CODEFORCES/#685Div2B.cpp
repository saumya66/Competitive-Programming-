
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll n, q;
	cin >> n >> q;
	string s; cin >> s;
	while (q-- > 0)
	{
		ll l , r;
		cin >> l >> r;
		l = l - 1; r = r - 1;
		ll len = (r - l) + 1;
		string ss = s.substr(l, len );

		ll f = 0, prev = 0;
		ll j = 0;
		//cout << ss << endl;
		//cout << len << endl;
		for (ll i = 0 ; i < n; i++)
		{
			if (j < len)
			{
				if (ss[j] == s[i])
				{

					if (j != 0 && i - prev > 1)
					{
						f = 1;
					}
					if (j == len - 1 && f == 0)
					{continue;}
					++j;
					prev = i;


				}



			}
		}
		if (j == len && f == 1 && len >= 2)cout << "YES" << endl;
		else cout << "NO" << endl;

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
	while (t-- > 0)
	{
		solve();
		cout << "\n";
	}

	return 0;
}
