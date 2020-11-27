
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll n, m;
	cin >> n >> m;
	ll ar[n][m] ;
	ll f = 0;
	bool b[n][m];
	for (ll i = 0; i < n; i++)
	{
		for (ll j = 0; j < m; j++)
		{
			cin >> ar[i][j];
			b[i][j] = ar[i][j] % 2;
		}
	}
	for (ll i = 0; i < n; i++)
	{
		for (ll j = 0; j < m; j++)
		{
			if ((i + j) % 2 == b[i][j])
				cout << ar[i][j] << " ";
			else cout << ++ar[i][j] << " ";

		}
		cout << endl;

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
