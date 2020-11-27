
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	ll a, b;
	cin >> a >> b;
	if ((a + b) % 3 == 0 && 2 * a >= b && 2 * b >= a )
	{
		cout << "YES";
	}
	else cout << "NO";


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


		solve();
		cout << "\n";
	}

	return 0;
}

