
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll n, k;
	cin >> n >> k;
	ll l = n * k;
	std::vector<ll> v(l);
	for (ll &x : v)cin >> x;
	ll g = 0;
	if (n % 2 == 0)g = n / 2;
	else g = n / 2;
	//cout << g << endl;

	ll c = 0, s = 0;

	for (ll i = l - 1 - g; i >= 0; i = i - g - 1)
	{
		//cout << "h";
		s += v[i];
		++c;
		//cout << v[i] << " ";
		if (c == k)
		{
			cout << s;
			return;
		}
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
