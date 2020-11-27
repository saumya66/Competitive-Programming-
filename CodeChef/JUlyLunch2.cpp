
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	ll n, m, x, y;
	cin >> n >> m >> x >> y;
	ll t = n * m;
	ll s;
	ll t1, t2;
	if (t % 2 != 0)
	{
		t1 = (t / 2) + 1;
		t2 = t / 2;
	}
	else t1 = t2 = t / 2;
	if (x == 1 && y == 1)
	{
		cout << t1;
		return ;

	}
	if (x < y)
	{
		s = (x * t1) + ((y - x) * t2);
	}
	else if (y < x) {
		s = (y * t1) + ((x - y) *  t2);

	}
	else if (x == y) {
		if (x % 2 != 0)
		{
			x = ((x / 2) + 1);
			y = y / 2;
			s = (y * t1) + (x * t2);
		}
		else {
			x = x / 2;
			y = y / 2;
			s = (y * t1) + (x * t2);



		}
	}
	cout << s ;


}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	ll t;
	cin >> t;
	while (t-- > 0)
	{
		solve();
		cout << "\n";
	}

	return 0;
}
