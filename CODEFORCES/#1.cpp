
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll n;
	cin >> n;
	std::vector<ll> v  ;
	ll b = n % 9;
	for (ll i = 0; i < n; i++) {
		v.push_back(8);
	}
	ll a = 0;
	cout << 9;
	for (ll i = 1; i < n; i++)
	{
		ll a = n - i;
		cout << abs(9 - a);

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
