
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	ll na, np, k;
	cin >> na >> np >> k;
	std::vector<ll > va;
	std::vector<ll > vp;
	ll temp = 0;
	for (ll i = 0; i < na; i++) {
		cin >> temp;
		va.push_back(temp);
	}
	for (ll i = 0; i < np; i++) {
		cin >> temp;
		vp.push_back(temp);
	}
	ll c = 0;
	sort(va.begin(), va.end());
	sort(vp.begin(), vp.end());
	for (ll i = 0, j = 0; i < na; ++i)
	{
		while (j < np && vp[j] < va[i] - k)
		{
			++j;

		}
		if (j < np && vp[j] <= va[i] + k)
		{	++c;
			++j;
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
