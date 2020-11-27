//Kaldane's Algorithm

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	ll n;
	cin >> n;
	ll ar[n];
	for (ll i = 0; i < n; ++i)
	{
		cin >> ar[i];
	}
	ll ma  = ar[0];
	ll cur = ma ;
	for (ll i = 1; i < n; ++i)
	{
		cur = max(ar[i] + cur, ar[i]);
		ma  = max(cur, ma );

	}
	cout <<  ma ;

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
