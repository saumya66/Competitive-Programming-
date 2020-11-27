
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{

	int n;
	cin >> n;
	std::vector<int>v(n);
	for (int &x : v)cin >> x;
	int max_sum = n * 1000;
	std::vector<std::vector<int> > dp(n + 1, std::vector<int>(max_sum + 1, false));
	dp[0][0] = true;
	for (int i = 1; i <= n; i++ ) {
		for (int j = 0; j <= max_sum; j++)
		{
			dp[i][j] = dp[i - 1][j];
			if (j - v[i - 1] >= 0)
			{
				if (dp[i - 1][j - v[i - 1]]) {
					dp[i][j] = true;
				}
			}
		}
	}
	std::vector<int> ans;
	for (int j = 1; j <=  max_sum; j++ )
	{
		if (dp[n][j])ans.push_back(j);
	}
	cout << ans.size() << endl;
	for (int x : ans)cout << x << " ";




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


	return 0;
}
