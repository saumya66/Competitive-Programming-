
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	ll n;
	cin >> n;
	std::vector<ll> v1;
	std::vector<ll> v2;
	ll temp = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> temp;
		v1.push_back(temp);
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> temp;
		v2.push_back(temp);
	}
	sort( v1.begin(), v1.end());
	sort( v2.begin(), v2.end());
	if (v1 == v2)
	{
		cout << "0" ;
		return;
	}
	ll sum = 0, f = 0;
	for (ll i = 1; i < n ; i++) {
		if (v1[i] == v2[i])continue;
		for (ll j = i - 1; j < n - 1; j++)
		{
			if ( v1[i] == v1[j]  && v2[i] == v2[j])
			{

				sum = sum + min(v1[j], v2[i]);;
				swap(v1[j], v2[i]);

			}
		}
		if (v1[i] != v2[i]) {f = -1; break;}


	}

	if (v1[0] != v2[0])
	{
		f = -1;
	}


	if (f == -1)
	{
		cout << f;
	}
	else
	{
		cout << sum;
	}



}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
// /*
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
// */
	ll t;
	cin >> t;
	while (t-- > 0)
	{
		solve();
		cout << "\n";
	}

	return 0;
}
