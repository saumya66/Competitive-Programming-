
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll x, y;
	cin >> x >> y;
	if (x == y) {
		cout << 2 * x;
	}
	else
	{
		cout << min(x, y) * 2 + ((max(x, y) - min(x, y)) * 2) - 1;
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
	ll t;
	cin >> t;
	while (t-- > 0)
	{
		solve();
		cout << "\n";
	}

	return 0;
}

