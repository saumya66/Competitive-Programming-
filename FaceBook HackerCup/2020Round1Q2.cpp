
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
#define mod 1000000007;

void solve()
{
	ll n , k  , al, bl, cl, dl, ah, bh, ch, dh, aw, bw, cw, dw;
	cin >> n >> k  ;
	std::vector<ll> l , h , w;
	for (ll i = 0; i < k; i++) {
		ll t;
		cin >> t;
		l.push_back(t);
	}
	cin >> al >> bl >> cl >> dl;

	for (ll i = 0; i < k; i++) {
		ll t;
		cin >> t;
		w.push_back(t);
	}
	cin >> aw >> bw >> cw >> dw;


	for (ll i = 0; i < k; i++) {
		ll t;
		cin >> t;
		h.push_back(t);
	}

	cin >> ah >> bh >> ch >> dh;
	ll t1, t2, t3;
	map<ll, ll>mins, maxs;
	if (n > k) {

		for (ll i = k; i < n; i++) {
			t1 = (((al * l[i - 2]) + ( bl * l[i - 1]) + cl) % dl) + 1;
			l.push_back(t1);

			t3 = (((aw * w[i - 2]) + ( bw * w[i - 1]) + cw) % dw) + 1;
			w.push_back(t3);

			t2 = ( ((ah * h[i - 2]) + ( bh * h[i - 1]) + ch) % dh) + 1;
			h.push_back(t2);
		}
	}
	ll   minw = 1e9 , maxw = 0 ;
	vector<   unsigned long long int> p ;
	for (ll i = 0; i < n; i++)
	{
		ll s = 0;
		if (i == 0) {
			s = ( 2 * (w[i] + h[i])) % mod;
			p.push_back(s);
		}
		else if (l[i] + w[i] >= minw && l[i] + w[i] <= maxw) {
			if (l[i] < minw) {
				s = s + 2 * (minw - l[i]);
			}
			s =  p[i - 1] + s ;
			p.push_back(s);
		}

		else if (l[i] >= minw && l[i] <= maxw) {

			if (l[i] + w[i] > maxw) {
				s = s + 2 * ((l[i] + w[i]) - maxw);
			}

			s =  p[i - 1] + s ;
			p.push_back(s);

		}
		else {
			s = 2 * (w[i] + h[i]);
			s =  s + p[i - 1] ;
			p.push_back(s);
			//	minw = l[i];
			//	maxw = l[i] + w[i];

		}
		minw = min(minw, l[i]);
		maxw = max(maxw, l[i] + w[i]);



	}
	unsigned long long int  ans = 1 ;

	for (   unsigned long long int x : p) {

		ans = (ans * x) % mod  ;
	}


	for (ll x : p)cout << x << " ";


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
