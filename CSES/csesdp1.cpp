
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MOD 1000000007


void solve()
{

	ll n;
	cin >> n;
	vector<ll> dp(n + 1, 0);
	dp[0] = 1;
	for (ll i = 1; i <= n; i++)
	{
		for (ll  j = 1; j <= 6; ++j)
		{
			if (i - j >= 0)
				dp[i] = ( dp[i] + dp[i - j]) % MOD ;
		}
	}
	cout << dp[n]  ;



}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	/*
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	*/

	solve();
	cout << "\n";

	return 0;
}

