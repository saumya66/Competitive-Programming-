
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	ll n;
	cin >> n;
	ll ar[n];
	for (ll i = 0; i < n; ++i)
	{
		cin >> ar[i];
	}
	sort(ar, ar + n );

	ll l = 0;
	ll t = n / 2;
	ll s = 0;
	if (n % 2 == 0 )
	{
		l = ar[t - 1];
	}
	else
	{
		l = ar[t];

	}


	for (ll i = 0; i < n; ++i)
	{
		if (ar[i] != l)
		{
			s = s +  abs(l - ar[i]) ;
		}

	}
	cout << s;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);


	solve();
	cout << "\n";


	return 0;
}
