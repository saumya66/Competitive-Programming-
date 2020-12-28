
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll n;
	cin >> n;
	string s;
	cin >> s;
	ll i = n - 1;
	ll bc = 0;
	while (s[i] == ')')
	{
		++bc;
		--i;
	}
	if (bc > n - bc)
	{
		cout << "Yes";
	}
	else cout << "No";

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

