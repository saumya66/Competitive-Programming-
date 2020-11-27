
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
ll M = 1000000007;

void solve()
{
	ll n; cin >> n;
	std::vector<ll> cand(n);
	for (ll &x : cand)cin >> x;
	ll cf = 0, cu = 0;
	ll q;
	cin >> q;
	ll pr = 0;
	ll f = 0;
	ll ch = 0;
	ll c = 0;
	for (ll i = 0; i < q; i++)
	{
		ll r; cin >> r;


		//cout << "hi " << ch << " " << f;
		for (ll j = pr; j < r; j++)
		{
			ll nu = (cand[(j % n)]) % M;
			if (nu == 1)
			{
				//cout << ch << " ";
				if (ch == f)cf = (cf % M) + 1; ch = !ch;
				//  cout << ch << endl;
			}

			if (f == ch)
			{
				if (nu % 2 == 0)
				{
					cf = ((cf % M) + nu % M) % M;

				}
				else cf = ((cf % M) + (nu - 1) % M) % M;
			}
			// if (ch != f) { c++; }
			c++;

			//cout << "c " << c << endl;
			if (c == n ) {f = !f; c = 0;}
		}
		pr = r;
		cout << cf % M << endl;



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
