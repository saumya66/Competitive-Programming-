
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	int n, x;
	cin >> n >> x;
	std::vector<int> pr, pa;

	for (int i = 0; i < n; i++ ) {
		ll t ;
		cin >> t   ;
		pr.push_back(t );


	}

	for (int i = 0; i < n; i++ ) {
		ll t ;
		cin >>   t ;

		pa.push_back(t );

	}
	int dp[n + 1][x + 1];
	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= x; ++j)
		{
			if (i == 0 || j == 0)
				dp[i][j] = 0;
			else if (pr[i - 1] <= j)
				dp[i][j] = max(pa[i - 1] + dp[i - 1][j - pr[i - 1]], dp[i - 1][j]);
			else dp[i][j] = dp[i - 1][j];




		}
	}
	cout << dp[n  ][x  ];




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
