
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve()
{
	ll n, k, p;
	cin >> n >> k >> p;
	std::vector< vector<ll>  > v;
	for (ll i = 0; i < n; i++)
	{
		std::vector<ll> b;
		for (ll j = 0; j < k; j++)
		{
			ll temp;
			cin >> temp;
			b. push_back(temp);
		}
		v.push_back(b);

	}
	ll s = 0, max = 0;

	for (ll i = 0; i < n; i++)
	{
		if (k < p)
		{
			ll c = 0;
			ll mae = 0 , x = 0;
			mae = *max_element(v[i].begin(), v[i].end() );
			auto it = upper_bound(v[i].begin(), v[i].end(), mae);
			ll pos = it - v[i].begin() - 1;
			cout << pos;
			for (ll y = 0; y < pos; ++y)
			{
				s = s +  v[i].at(y);
				++x;
			}


			p = p - x;
			cout << "first sum " << s << endl;
			cout << p << endl;
		}
		else if (p  <= k)
		{

			for (ll g = i; g < n; g++)
			{
				ll sum = 0;
				for (ll l = 0; l < p; l++)
				{
					sum = sum + v[g].at(l);

				}
				if (sum > max)max = sum;
			}

			break;


		}
	}
	s = s + max;
	cout << s;


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
