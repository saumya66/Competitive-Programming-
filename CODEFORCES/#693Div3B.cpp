
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll n;
	cin >> n;
	ll c1 = 0, c2 = 0;
	for (ll i = 0; i < n; i++)
	{
		ll x;
		cin >> x;
		if (x == 1)++c1;
		else ++c2 ;
	}
	if (c1 % 2 != 0)
	{
		cout << "NO";
		return;
	}
	if (c2 % 2 == 0)
	{
		cout << "YES";
	}
	else {
		if (c1 > 1)
		{
			cout << "YES";
		}
		else cout << "NO";
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




