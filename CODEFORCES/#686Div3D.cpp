
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;




void solve()
{
	ll n;
	cin >> n;
	std::vector<pair<ll, ll>> pc;
	ll a = n;
	ll c = 0;
	while (n % 2 == 0) {
		++c;
		n = n / 2;
	}
	if (c > 0)	pc.push_back({c, 2});

	for (ll i = 3; i <= sqrt(n); i = i + 2) {
		c = 0;
		while (n % i == 0) {
			//cout<<i<<"\t";
			n = n / i;
			++c;
		}
		if (c > 0)
		{
			pc.push_back({c, i});
		}
	}




	if (a > 1)	pc.push_back({1, n});
// 	for (ll i = 0; i < pc.size(); i++)
// 	{
// 		cout << pc[i].first << " " << pc[i].second << endl;
// 	}
	sort(pc.begin(), pc.end());
	ll l = pc[pc.size() - 1].first;
	std::vector<ll> ans;
	for (ll i = 0; i < l - 1; i++)
	{
		ans.push_back(pc[pc.size() - 1].second);
	}
	ll p = 1;
	for (ll i = 0; i < pc.size() - 1; i++)
	{
		// for(ll j=0;j<pc[i].first;j++)
		// {
		// 	p= pc[i].second
		// }
		p = p * pow(pc[i].second, pc[i].first);
	}
	p *= pc[pc.size() - 1].second;
	ans.push_back(p);
	cout << l << endl;
	for (ll x : ans)cout << x << " ";
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
