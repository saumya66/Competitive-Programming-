
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
	if (n > k) {
		for (ll i = k; i < n; i++) {
			ll t1 = (((al * l[i - 2]) + ( bl * l[i - 1]) + cl) % dl) + 1;
			l.push_back(t1);

			ll t2 = ( ((ah * h[i - 2]) + ( bh * h[i - 1]) + ch) % dh) + 1;
			h.push_back(t2);
		}
	}
	ll   minw = 1e9, maxw = 0, maxh = 0;
	vector<ll> p ;
	for (ll i = 0; i < n; i++)
	{
		ll s = 0;
		if (i == 0) {
			s = 2 * (w + h[i]);
			p.push_back(s);
		}

		else if (l[i] >= minw && l[i] <= maxw) {

			if (h[i] > maxh) {
				s = s + 2 * (h[i] - maxh   );
			}
			if (l[i] + w > maxw) {
				s = s + 2 * ((l[i] + w) - maxw);
			}
			//cout << s << " " ;
			//cout << p[i - 1];
			s = p[i - 1] + s;
			p.push_back(s);

		}
		else {
			s = 2 * (w + h[i]);
			s = s + p[i - 1];
			p.push_back(s);
			minw = l[i];
			maxw = l[i] + w;
			maxh = h[i];
		}
		minw = min(minw, l[i]);
		maxw = max(maxw, l[i] + w);

		maxh = max(maxh, h[i]);

	}
//	for (ll x : l)cout << x << " ";
//	cout << endl;
//	for (ll x : h)cout << x << " ";
//	cout << endl;
	for (ll x : p)cout << x << " ";
	ll  ans = 1 ;

	for ( ll x : p) {

		ans = (ans  * x) % mod   ;

	}


	cout << ans  ;

//Case #5 P values :
// 294 304 306 1052 1056 1150 1612 1618 1628 2256 2270 2272 2286 2288 2302 2304 2318 2320 2334 2424 2438 2440 2454 2456 2470 2472 2486 2488 2558 2560 2574 2576 2590 2592 2606 2608 2622 2624 2638 2640 2654 2656 2670 2672 2686 2688 2702 2704 2718 2720
//Multiplied ans without mod
//2.2559228 ×10^162

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
		cout << "\n";
	}

	return 0;
}
