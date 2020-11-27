
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	ll n;

	cin >> n;
	vector<ll> v;
	ll temp = 0;
	for (ll i = 0; i < n; i++)
	{
		cin >> temp;

		v.push_back(temp);
	}
	sort(v.begin(), v.end());
	if (v.at(n - 1) == v.at(n - 2))
	{
		cout << "NO";
		return;
	}
	std::vector<int> v1;
	std::vector<int> v2;
	for (ll i = 0; i < n; i++)
	{
		if (i == 0 || v.at(i - 1) != v.at(i))
		{
			v1.push_back(v.at(i));
		}
		else
		{

			v2.push_back(v.at(i));
			if (i < n - 1)
			{
				if (v.at(i) == v.at(i + 1))
				{
					cout << "NO";
					return;
				}
			}
		}


	}
	sort(v2.begin(), v2.end(), greater<int>());
	for (auto x : v1)
	{
		cout << x << " ";
	}
	for (auto y : v2)
	{
		cout << y << " ";
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

