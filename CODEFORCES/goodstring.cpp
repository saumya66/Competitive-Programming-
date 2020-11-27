
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it


int calc(string s, char c)
{
	if (s.size() == 1)
	{
		return s[0] != c;
	}
	ll mid = s.size() / 2;
	int cl = s.size() / 2 - count (s.begin() , s.begin() + mid, c) + calc(string(s.begin() + mid, s.end()), c + 1);
	int cr = s.size() / 2 - count (s.begin() + mid, s.end(), c) + calc(string(s.begin() , s.begin() + mid), c + 1);
	return min(cl, cr);
}


void solve()
{
	ll n;
	cin >> n;
	string s;
	cin >> s;
	ll ans = calc(s, 'a');
	cout << ans;

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
