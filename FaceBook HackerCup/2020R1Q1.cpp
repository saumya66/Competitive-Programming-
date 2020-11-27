
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
#define mod 1000000007;

void solve()
{
	ll n , k, w , al, bl, cl, dl, ah, bh, ch, dh;
	cin >> n >> k >> w;
	std::vector<ll> l , h ;
	for (ll i = 0; i < k; i++) {
		ll t;
		cin >> t;
		l.push_back(t);
	}
	cin >> al >> bl >> cl >> dl;
	for (ll i = 0; i < k; i++) {
		ll t;
		cin >> t;
		h.push_back(t);
	}

	cin >> ah >> bh >> ch >> dh;
	ll t1, t2;
	if (n > k) {

		for (ll i = k; i < n; i++) {
			t1 = (((al * l[i - 2]) + ( bl * l[i - 1]) + cl) % dl) + 1;
			l.push_back(t1);

			t2 = ( ((ah * h[i - 2]) + ( bh * h[i - 1]) + ch) % dh) + 1;
			h.push_back(t2);
		}
	}
	ll   minw = 1e9 , maxw = 0, maxh = 0;
	vector<   unsigned long long int> p ;
	for (ll i = 0; i < n; i++)
	{
		ll s = 0;
		if (i == 0) {
			s = ( 2 * (w + h[i])) % mod;
			p.push_back(s);
		}

		else if (l[i] >= minw && l[i] <= maxw) {

			if (h[i] > maxh) {
				s = s + 2 * (h[i] - maxh   );
			}
			if (l[i] + w > maxw) {
				s = s + 2 * ((l[i] + w) - maxw);
			}

			s =  p[i - 1] + s ;
			p.push_back(s);

		}
		else {
			s = 2 * (w + h[i]);
			s =  s + p[i - 1] ;
			p.push_back(s);
			minw = l[i];
			maxw = l[i] + w;
			maxh = h[i];
		}
		minw = min(minw, l[i]);
		maxw = max(maxw, l[i] + w);

		maxh = max(maxh, h[i]);

	}
	unsigned long long int  ans = 1 ;

	for (   unsigned long long int x : p) {

		ans = (ans * x) % mod  ;
	}
//	for (ll x : p)cout << x << " ";


	cout << ans % mod ;





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
	ll t1 = 0;
	while (t1++ < t) {
		cout << "Case #" << t1 << ":" << " ";
		solve();
		cout << endl;
	}

	return 0;
}
