
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

const int N = 1e5 + 7;
ll n, s;
ll v[N];

ll sum(ll k)
{
	ll su[n];
	ll ans = 0;
	for (ll i = 0; i < n; i++)
	{
		su[i] = v[i] + ((i + 1) * k);
	}
	sort(su, su + n);
	for (ll i = 0; i < k; i++)
	{
		ans += su[i];
	}
	return ans;
}

void solve()
{
	cin >> n;
	cin >> s;

	for (ll i = 0; i < n; i++)
	{
		cin >> v[i];

	}
	ll ans = 0;

	ll l = 0, r = n + 1;
	ll m = 0, summ = 0;
	while (l  + 1 < r)
	{

		m = (l + r) / 2;
		summ = sum(m);
		if (summ < s)
		{
			l = m  ;

			//cout << "l " << l << " " << ans << endl;
		}
		else if (summ > s)
		{
			r = m ;
		}
		else { cout << m << " " << summ; return;}
	}
	cout << l << " " << sum(l);
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

	solve();
	cout << "\n";


	return 0;
}
