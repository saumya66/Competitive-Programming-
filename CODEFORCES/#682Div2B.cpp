
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll n;
	cin >> n;
	std::vector<ll> b(n), a;
	set<ll> s;
	ll f = 0;
	for (ll &x : b) {
		cin >> x;
		if (s.count(x))
		{
			f = 1;
		}
		else {
			s.insert(x);
		}

	}
	if (f == 1)
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
