
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll n, m;
	cin >> n >> m;
	std::vector<ll> k(n);
	std::vector<ll> c ;
	for (ll &x : k)
	{
		cin >> x;

	}
	ll su = 0;
	ll t = 0;
	for (ll i = 0; i < m; i++) {ll x; cin >> x; t += x; c.push_back(x);}
	sort(k.begin(), k.end(), greater<int>());
	ll f = 0;
	for (ll i = 0, j = 0; i < n  ; i++)
	{
		//cout << i << j << endl;
		//cout << c[j] << " " << c[k[i] - 1] << endl;
		if (f == 1)
		{

			su += c[k[i] - 1];

		}
		else
		{
			if (c[j] <= c[k[i] - 1]) {su += c[j]; t -= c[j];}
			else if (c[k[i] - 1] <= t)
			{
				su += c[k[i] - 1];
			}
		}

		j++;
		if (j == m)
		{
			f = 1;
		}

	}
	cout << su;


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
