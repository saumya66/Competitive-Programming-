
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 1000006

void solve()
{
	ll n;
	cin >> n;
	std::vector<ll> dp(n + 1, MAX);
	dp[0] = 0;
	for (ll i = 1; i <= n; ++i)
	{
		ll t = i;
		while (t) {

			dp[i] = min(dp[i], dp[i - t % 10] + 1);
			t = t / 10;
		}
	}
	cout << dp[n];

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
