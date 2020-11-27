
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;


void solve()
{
	ll n;
	cin >> n;
	if (n == 1)
	{
		cout << 0; return;
	}
	else if (n == 2)
		cout << 1;
	else if (n == 3)cout << 2;
	else if (n % 2 == 0)
	{
		cout << 2;

	}
	else  cout << 3;


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
