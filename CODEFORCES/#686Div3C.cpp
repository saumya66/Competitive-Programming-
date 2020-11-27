
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll n; cin >> n;
	std::vector<ll> v, ve;

	for (ll i = 0; i < n; i++)
	{
		ll x; cin >> x;
		v.push_back(x);

	}
	std::map<ll, ll> m;

	ve.push_back(v[0]);
	m[v[0]]++;
	for (ll i = 1; i < n; i++)
	{
		if (v[i - 1] == v[i])continue;
		else {ve.push_back(v[i]);	m[v[i]]++;}

	}
	//for (ll x : ve)cout << x << " ";

	ll 	mn = 1e9; ll a = 0;
	ll l = ve.size();
	map<ll, ll>:: iterator it;
	if (ve[0] == v[0])--m[ve[0]];
	if (ve[l - 1] == v[n - 1])--m[ve[l - 1]];

	for (ll i = 0; i < l; i++)
	{
		//cout << ve[i] << " " << m[ve[i]] << endl;

		if (m[ve[i]] < mn)
		{

			a = ve[i];
			mn = m[ve[i]];
		}

	}
	mn++;

	cout << mn;






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
