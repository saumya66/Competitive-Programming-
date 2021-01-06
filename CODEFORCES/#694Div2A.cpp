
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll n;
	ll   x, mn = 0;;
	cin >> n >> x;
	double  sum = 0;

	for (ll i = 0; i < n; i++)
	{
		double a;
		cin >> a;
		mn += (ll)ceil(a / x);
		//cout << ceil(a / x) << " ";
		sum += a;
	}
	cout << (ll)ceil(sum / x) << " " << mn;

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
