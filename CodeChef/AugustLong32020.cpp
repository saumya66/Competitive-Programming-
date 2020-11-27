
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	ll c, r ;
	cin >> c >> r;
	ll dc = 1, dr = 1, t = 9;

	if (c < 10)dc = 1;
	else {
		ll t = 0;
		t = c % 9;
		if (t == 0)dc = c / 9;
		else dc = c / 9 + 1;
	}
	if (r < 10)dr = 1;
	else {
		ll t = 0;
		t = r % 9;
		if (t == 0)dr = r / 9;
		else dr = r / 9 + 1;
	}


	if (dc == dr)cout << "1" << " " << dr;
	else if (dc > dr)cout << "1" << " " << dr;
	else if (dc < dr)cout << "0" << " " << dc;
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
