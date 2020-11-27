
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	ll n;
	cin >> n;
	vector<ll>s;

	ll ma = 0;
	for (ll i = 0; i < n; i++)
	{
		ll t;
		cin >> t;
		if ( find(s.begin(), s.end(), t) != s.end())
		{

			vector<ll>:: iterator it, it1;
			it = find (s.begin(), s.end(), t);

			for (it1 = s.begin(); it1 != it; it1++)
			{
				s.erase(it1);
			}
			s.erase(it);



		}
		s.push_back(t);
		ll z =  s.size();
		ma = max(ma, z );

	}

	cout << ma;


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
