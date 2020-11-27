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

	ll a = 1, b = 2;
	ll n = 0, s = 0;
	while (n <= 8)
	{
		n = a + b;
		if (n % 2 == 0)s = s + n;

		a = b;
		b = n;


	}
	cout << s + 2;


	return 0;
}
