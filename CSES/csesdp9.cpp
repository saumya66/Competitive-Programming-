
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	string s1, s2;
	cin >> s1 >> s2;
	int l1 = s1.length();
	int l2 = s2.length();
	vector<vector<int>> dp(l1 + 1, vector<int>(l2 + 1, 1e9));


	for (int i = 0; i <= l1 ; i++)
	{
		for (int j = 0; j <= l2 ; j++)
		{
			if (i == 0)
			{
				dp[i][j] = j;
			}
			else if (j == 0)
			{
				dp[i][j] = i;

			}
			else if (s2[j - 1] == s1[i - 1]) {
				dp[i][j] = dp[i - 1][j - 1];

			}
			else {
				dp[i][j] = min(dp[i][j - 1], min(dp[i - 1][j - 1], dp[i - 1][j])) + 1;
			}

		}
	}
	cout << dp[l1  ][l2  ];




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
