
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll w, h, n;
	cin >> w >> h >> n;
	ll c1 = 1, c2 = 1;
	while (w % 2 == 0)
	{
		c1 = c1 * 2;
		w = w / 2;
	}

	while (h % 2 == 0)
	{
		c2 = c2 * 2;
		h = h / 2;
	}

	ll mx = c2 * c1;
	//cout << mx << endl;
	if (n <= mx)cout << "YES";
	else  cout << "NO";


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
