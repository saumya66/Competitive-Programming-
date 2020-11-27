
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007


void solve()
{
	ll n;
	cin >> n;

	vector<vector<ll>> dp(n, vector<ll>(n, 0));
	dp[0][0] = 1;

	for (ll i = 0; i  < n; ++i)
	{
		string s;
		cin >> s;
		for (ll j  = 0; j <  n; ++j)
		{
			/* code */
			if (s[j] == '.') {
				if (i > 0)
					dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;

				if (j > 0)
					dp[i][j] = ( dp[i][j] + dp[i][j - 1]) % MOD;

			}
			else dp[i][j] = 0;
		}
	}

	cout << dp[n - 1][n - 1];

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
