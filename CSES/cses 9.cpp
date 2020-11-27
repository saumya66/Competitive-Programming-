
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(ll n)
{
	ll fact = n;
	ll ans = 0;
	for (ll j = 5; j <= n; j = j * 5 )
	{

		ans = ans + n / j;
	}
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
	ll n;
	cin >> n;

	solve(n);
	cout << "\n";


	return 0;
}
