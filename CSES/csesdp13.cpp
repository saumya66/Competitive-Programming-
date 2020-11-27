
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007

void solve()
{
	int n;
	cin >> n;
	ll sum = (n * (n + 1)) / 2;
	if (sum % 2 !=  0) {

		cout << "0";
		return ;



	}

	sum = sum / 2;
	std::vector<std::vector<int>> dp(n,  vector<int>(sum + 1, 0));
	dp[0][0] = 1;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j <= sum; j++)
		{


			if (j - i >= 0) {
				dp[i ][j] =   (dp[i - 1 ][j] + dp[i - 1][j - i]) % MOD ;

			}
			else dp[i ][j] = dp [i - 1][j];
		}
	}
	cout << dp[n - 1][sum];



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
