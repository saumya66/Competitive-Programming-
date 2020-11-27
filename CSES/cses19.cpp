
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	ll n;
	ll w;
	cin >> n >> w;
	std::vector<ll> v;
	ll temp = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());
	ll j = n - 1, i = 0;
	ll c = 0;
	while (i  <= j)
	{
		if (v.at(j) + v.at(i) > w)
		{
			++c;
			--j;
		}
		else
		{
			c++;
			i++;
			j--;

		}
	}
	cout << c;
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

	solve();
	cout << "\n";


	return 0;
}


