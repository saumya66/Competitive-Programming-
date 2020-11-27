
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(string str)
{
	unordered_map <char, ll> map;
	for (ll i = 0; i < str.length(); i++)
	{
		map[str[i]]++;
	}
	ll odc = 0;
	char odch;
	for (auto x : map)
	{
		if (x.second % 2 != 0)
		{
			odc++;
			odch = x.first;
		}
	}

	if (odc > 1 || odc == 1 &&
	        str.length() % 2 == 0)
	{
		string n = "NO SOLUTION";
		cout << n;

	}

	string fh = "", sh = "";
	for (auto y : map)
	{
		string s(y.second / 2, y.first);

		fh = fh + s;
		sh = s + sh;
	}
	string ans;
	if (odc == 1)
	{
		ans = fh + odch + sh;
		cout << ans;
	}
	else
	{
		ans = fh + sh;
		cout << ans;
	}


}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	///*
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
//	*/
	string s;
	cin >> s;
	solve(s);

	cout << "\n";


	return 0;
}
