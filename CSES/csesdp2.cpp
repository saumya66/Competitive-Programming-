
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 1000000007
void solve()
{
	ll n, x;
	cin >> n;
	cin >> x;
	std::vector<ll> coins;
	std::vector<ll> dp(x + 1, MAX);
	dp[0] = 0;
	for (ll i = 0; i < n; i++)
	{
		ll t;
		cin >> t;
		coins.push_back(t);
	}
	for (ll i = 1; i <= x; i++)
	{
		for (ll j = 0; j < n; j++)
		{


			if (i - coins[j] >= 0)
			{

				dp[i] = min(dp[i], dp[i - coins[j]] + 1) ;

			}
		}
	}
	cout << (dp[x] == MAX  ? -1 : dp[x]);
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
