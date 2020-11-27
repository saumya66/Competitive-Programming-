
#include<stdio.h>
#include<vector>
using namespace std;
typedef long   ll;

void solve()
{
	ll n ;
	scanf("%ld", &n);
	std::vector<ll> v;
	for (ll i = 0; i < n; i++)
	{
		ll temp;
		scanf("%ld ", &temp);

		v .push_back(temp);
	}
	ll q, c = 0, f = 0, s;
	scanf("%ld", &q);
	while (q-- > 0)
	{
		s = 0;
		c = 0;
		f = 0;
		ll a, b;
		scanf("%ld,%ld", &a, &b);
		s = a + b;
		for (int i = 0; i < n; ++i)
		{
			if (s > v[i])++c;
			else if (s == v[i]) {
				f = -1;
				break;

			}
		}
		ll z = -1;
		if (f == -1)printf("%ld  ", z );
		else
			printf("%ld  ", c );

	}




}
int main()
{

// /*
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
// */
	ll t;
	scanf("%ld", &t);
	while (t-- > 0)
	{
		solve();


	}


}
