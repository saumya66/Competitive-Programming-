
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
ll n = 10000000;

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

	std::vector<ll> pr;
	std::vector<bool> isPrime  (n + 1, true);
	isPrime[0] = false;
	isPrime[1] = false;
	for (ll i = 2; i * i <= n; i++)
	{
		if (isPrime[i]  )
		{
			for (ll j = i * i; j <= n; j = i + j)
			{
				isPrime[j] = false;

			}
		}
	}
	for (ll i = 0; i <= n; i++)
	{
		if (isPrime[i]) {
			//cout << i << " ";
			pr.push_back(i);
		}
	}

	while (t-- > 0)
	{
		ll nu;
		cin >> nu;
		std::vector<ll> b(nu);
		for (ll &x : b) {
			cin >> x;
		}
		std::vector<ll> a(nu);
		// 5 2 3 4 5
		// 1 2 3 4 5
		//  2 3 7 11 13
		for (ll i = 0; i < nu; i++)
		{
			a[i] = pr[i];
		}
		for (ll i = 0; i < nu; i++)
		{

			a[i] = a[b[i] - 1];
		}
		for (ll x : a)cout << x << " ";
		cout << "\n";
	}



	return 0;
}
