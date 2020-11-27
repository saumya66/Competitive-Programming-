
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	ll p , c;
	cin >> p >> c;
	multiset < ll, greater<int> > vp;

	ll temp = 0;
	for (ll i = 0; i < p; ++i)
	{
		cin >> temp;
		vp.insert(temp);
	}

	for (ll i = 0 ; i < c; i++)
	{
		multiset<ll>:: iterator it ;
		cin >> temp;
		it = vp.lower_bound(temp);
		if (it != vp.end())
		{
			cout << *it << endl;
			vp.erase (it);
		}
		else
			cout << "-1" << endl;






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

	solve();


	return 0;
}
