
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll n  ;
	cin >> n;
	std::vector<ll> v(n);
	for (ll &x : v)cin >> x;


	ll f = 0;
	for (ll i = 0; i  < n - 1  ; i++)
	{
		if (v[i] <= v[i + 1]) {
			f = -1; break;
		}

	}

	if (f == 0) {
		cout << "NO";
	}
	else cout << "YES";

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
