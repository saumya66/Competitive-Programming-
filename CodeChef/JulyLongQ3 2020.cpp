
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	ll k;
	cin >> k;
	string ar[8][8];
	ar[0][0] = "O";

	--k;
	for (ll i = 0; i < 8; ++i)
	{
		for (ll j = 0; j < 8; ++j)
		{
			if (i == 0 && j == 0)continue;
			if (k != 0)
			{
				ar[i][j] = ".";
				--k;
			}
			else
			{
				ar[i][j] = "X";
			}
		}
	}
	for (ll i = 0; i < 8; ++i)
	{
		for (ll j = 0; j < 8; ++j)
		{
			cout << ar[i][j] << " ";
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

