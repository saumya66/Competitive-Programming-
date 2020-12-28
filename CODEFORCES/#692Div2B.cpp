
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll n;
	cin >> n;
	string s = to_string(n);
	//cout << s << endl;
	set<ll> st;
	for (char x : s)
	{
		ll a = x - '0';
		if (a != 0)
			st.insert(a);
	}
	//for (ll x : st )cout << x << " ";

	for (ll i = n; i <= 10e18; i++)
	{
		ll f = 0;
		ll t = i;
		while (t > 0) {

			ll d  = t  % 10;
			if (d != 0 && i % d != 0)
			{f = 1; break;}

			t /= 10;
		}
		if (f == 0)
		{
			cout << i;
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

