
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll n;
	cin >> n;
	ll k;
	cin >> k;
	std::vector<ll> v(n);
	ll s = 0;
	for (ll &x : v) {cin >> x; s += x;}
	if (  n == 1) {
		cout << -1;
		return;
	}
	sort(v.begin(), v.end());
	ll s1 = 0, s2 = 0;

	ll i = n - 1;

	ll c = 0;
	ll f = 0;
	for (ll i = n - 1; i >= 0; --i)
	{

		if (s1 < k && f == 0)
		{
			s1 += v[i];
			f = 1;
			++c;
			if (s2 >= k && s1 >= k)
			{
				break;
			}
			continue;
		}
		if (f == 0 && s1 >= k)
		{
			s2 += v[i];
			f = 1;
			++c;
			if (s2 >= k && s1 >= k)
			{
				break;
			}
			continue;
		}
		if ( s2 < k )
		{
			if (f == 1)
			{
				s2 += v[i];
				++c;
				f = 0;
				if (s2 >= k && s1 >= k)
				{
					break;
				}
				continue;
			}



		}


	}
	//cout << s1 << " " << s2;
	if (s2 >= k && s1 >= k )cout << c ;
	else cout << -1;

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
