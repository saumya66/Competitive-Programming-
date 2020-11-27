
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	ll h, p;
	cin >> h >> p;
	//ll t = p / 2;
	if (h <= p)cout << "1";
	else {
		for (int i = 0; i < t; i++) {

			h = h - (p);
			if (h <= 0)break;
			p = p / 2;
			if (p <= 0)break;
		}


		if (h <= 0)cout << "1";
		else cout << "0";
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
	ll t;
	cin >> t;
	while (t-- > 0)
	{
		solve();
		cout << "\n";
	}

	return 0;
}
