
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	ll n;
	cin >> n;
	std::vector<ll> v;
	ll temp = 0;
	for (int i = 0; i < n; ++i)
	{	cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());
	vector<ll>:: iterator it;
	it = unique(v.begin(), v.end());
	v.resize(distance(v.begin(), it));
	cout << v.size();


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

