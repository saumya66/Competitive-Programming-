
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll n, m; cin >> n >> m;
	std::vector<ll>  v;  ll c = 0;
	ll s = 0;
	for (ll i = 0; i < n * m; i++)
	{

		ll x;
		cin >> x;

		v.push_back(abs(x));
		s += abs(x);
		if (x < 0)++c;

	}
	//cout << s << " " << endl;
	//for (ll x : v)cout << x << " ";
	sort(v.begin(), v.end());
	if (c % 2 == 0)
	{
		cout << s;
	}
	else {
		cout << s - v[0] - v[0];
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
