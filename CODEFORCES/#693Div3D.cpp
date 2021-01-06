
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll n;
	cin >> n;
	std::vector<ll>v(n);
	for (ll i = 0; i < n; i++)
	{
		ll x;
		cin >> x;
		v.push_back(x);

	}
	ll s1 = 0, s2 = 0;
	sort(v.begin(), v.end(), greater<int>());
	for (ll i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			if (v[i] % 2 == 0)
			{
				s1 += v[i];
			}
		}
		else {
			if (v[i] % 2 != 0)
			{
				s2 += v[i];

			}
		}
	}




	//cout << s1 << " " << s2;
	if (s1 > s2)cout << "Alice";
	else  if (s2 > s1)cout << "Bob";
	else cout << "Tie";
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
