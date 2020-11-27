
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(ll n)
{
	for (ll i = 1; i <= n; i++)
	{
		ll tot;
		ll nt;
		nt = 4 * (i - 1) * (i - 2);
		ll ans = 0;
		tot = ((i * i) * ((i * i) - 1)) / 2;
		ans = tot - nt;
		cout << ans << endl;


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
