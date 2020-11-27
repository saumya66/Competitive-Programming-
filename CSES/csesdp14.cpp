
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	ll n;
	cin >> n;
	std::vector<ll> v(n);
	for (ll &x : v)cin >> x;

	std::vector<ll> dp(n, 1);

	for (ll i = 1; i < n  ; i++) {

		for (ll j =  0; j < i; ++j)
		{
			if (v[i] > v[j] && dp[i] < dp[j] + 1)
			{

				dp[i] = dp[j] + 1;

			}
		}

	}


	ll ans = *max_element (dp.begin(), dp.end());

	cout << ans;



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

