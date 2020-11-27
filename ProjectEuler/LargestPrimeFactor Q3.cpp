#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll a = 600851475143;

	for (ll i = a / 2; i > 0; --i)
	{
		ll f = 0;
		if (a % i == 0)
		{
			for (ll j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					f = -1;
					break;
				}

			}
			if (f == 0)
			{
				cout << i;
				return 0;
			}
		}
	}



}
