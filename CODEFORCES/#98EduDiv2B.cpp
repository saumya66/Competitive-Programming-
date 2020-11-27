
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll n;
	cin >> n;
	std::vector<ll> v(n);


	ll f = 0, cnt = 0, c = 0;
	for (ll &x : v)cin >> x;
	ll mx = *max_element(v.begin(), v.end());
	cout << mx << endl;
	for (ll i = 0; i < n; i++)
	{
		c = v[i];
		for (ll j = 0; j < n; j++)
		{

			if (v[j] == mx)continue;
			else if (j == i)continue;
			else {
				cout << v[i] << " " << v[j] << endl;
				cout << c << " c";
				ll dif = mx - v[j];
				if (dif <= c)
				{
					c = c - dif;
				}
				else {
					if (f == 0)
					{
						f = 1;

						cnt += (dif - c);
						c = 0;
					}
					else cnt += dif;
				}
			}

		}
		cout << endl;
	}
	//cout << cnt;
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
