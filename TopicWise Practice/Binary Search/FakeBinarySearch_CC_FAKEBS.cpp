
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;


ll bin(vector<ll> a, ll n, ll x, ll rp)
{
	ll low = 0, high = 0, mid = 0;
	low = 0;
	ll cs = 0, cg = 0;
	high = n ;
	while (low <= high)
	{
		mid = (low + high) / 2;

		if (a[mid] == x)
		{

			break;
		}
		else if ( a[mid] < x)
		{
			if (rp < mid)
			{
				high = mid - 1;
				++cg;
			}
			else low = mid + 1;
		}
		else {

			if (rp > mid)
			{
				low = mid + 1;
				++cs;
			}
			else high = mid - 1;
		}
	}

	std::vector<ll> vs;
	vs = a;
	sort(vs.begin(), vs.end());
	auto it = find(vs.begin(), vs.end(), x);
	ll ps = it - vs.begin();
	ll sm  = ps - 1;
	ll gr = n - 1 - ps;
	if (cs > sm || cg > gr)return -1;
	else return  min( cs, cg ) + abs(cg - cs );

}



void solve()
{
	ll n, q;
	cin >> n >> q;
	std::vector<ll> v  ;
	for (ll i = 0; i < n; i++)
	{
		ll c;
		cin >> c;
		v.push_back(c);
	}
	std::vector<ll> vs;
	vs = v;
	sort(vs.begin(), vs.end());


	for (ll i = 0; i < q; i++)
	{
		ll x;
		cin >> x;
		auto it = find(v.begin(), v.end(), x);
		ll p = it - v.begin();

		ll ans = bin(v, n, x, p);

		cout << ans << " ";




	}
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
