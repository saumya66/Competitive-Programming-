
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
ll dp[5000][5000];
ll p[5000];

ll func2(ll t, ll n, ll k, std::vector<ll> v, ll d)
{
	if (t >= k &&  p[d] - t >= k)return 0;
	else if (d >= n)return 1e10;
	else if (dp[d][t] != -1)
		return dp[d][t];
	ll on = func2(min(t + v[d], p[d] - t), n, k, v, d + 1);
	ll tw = func2(min(t, p[d] - t + v[d]), n, k, v, d + 1);
	dp[d][t] = 1 + min(on, tw);
	return dp[d][t];
}

ll func1(std::vector<ll> v, ll n, ll k)
{
	for (ll i = 0; i < n / 2; ++i)
	{
		swap(v[i], v[n - i - 1]);
	}
	for (ll i = 0; i <= n + 10; i++)
	{
		p[i] = 0;
		for (ll j = 0; j <= k + 10; ++j)
		{
			dp[i][j] = -1;
		}
	}
	for (ll i = 1; i <= n; i++)
	{
		p[i] = p[i - 1] + v[i - 1];

	}
	ll out = func2(0, n, k, v, 0);
	if (out > 1e9)return -1;
	else return out;
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
	ll t;
	cin >> t;
	while (t-- > 0)
	{
		ll n, k;
		cin >> n >> k;
		std::vector<ll> v(n, 0);
		for (ll i = 0; i < n; i++)cin >> v[i];
		sort(v.begin(), v.end());
		cout << func1(v, n, k);

		cout << "\n";
	}

	return 0;
}
