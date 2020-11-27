
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{

	int  a, b;
	cin >> a >> b;
	vector<vector <int >> dp(a + 1, std::vector<int> (b + 1 ));
	for (int i = 0; i <=  a; ++i)
	{
		for (int j = 0; j <=  b; ++j)
		{
			if (i == j) {
				dp[i][j] = 0;

			}
			else {
				dp[i][j] = 1e9;

				for (int w = 1; w <  j; w++)
				{
					dp[i][j] =  min(dp[i][j] , dp[i][w] + dp[i][j - w] + 1 );

				}
				for (int h = 1; h <  i; h++)
				{
					dp[i][j] =   min(dp[i][j] , dp[i - h][j] + dp[h][j] + 1 );

				}
			}
		}
	}
	cout << dp[a][b];


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
