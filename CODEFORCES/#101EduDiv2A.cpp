
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{

	string s;
	cin >> s;
	ll l = s.length();
	if (s[0] == ')' || s[l - 1] == '(')cout << "NO";
	else {

		ll c = 0;
		for (ll i = 0; i < l; i++)
		{
			if (s[i] == '?')++c;

		}

		if (c % 2 == 0)cout << "YES";
		else cout << "NO";




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

