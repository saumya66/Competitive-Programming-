
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(ll n)
{
	ll ans = 1;
	if (n == 1)
	{
		ans = 2 ;
		cout << 2;

	}

	else
	{
		for (ll i = 0; i < n; i++)
		{
			ans = 2 * ans  % ((int)1e9 + 7);
		}
		cout << ans;
	}


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
	ll n;
	cin >> n;

	solve(n);
	cout << "\n";


	return 0;
}