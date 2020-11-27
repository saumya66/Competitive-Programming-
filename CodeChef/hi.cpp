
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
ll M = 1000000007;

void solve()
{

	ll n; cin >> n;
	std::vector<ll> cand(n);
	for (ll &x : cand)cin >> x;

	pair<bool, ll> p1 = {1, 1};
	pair<bool, ll> p2 = {0, 0};

	ll cf = 0 ;
	ll q;
	cin >> q;
	ll pr = 0;


	ll c = 0;
	for (ll i = 0; i < q; i++)
	{
		ll r; cin >> r;

		ll c = 0;
		for (ll j = pr; j < r; j++)
		{
			ll nu = (cand[(j % n)]) % M;
			if (p1.first == 1 &&  p1.second == 1)
			{

				if (nu == 1)
				{
					//cout << ch << " ";
					cf = (cf % M) + 1;
					p1.second = 0;
					p2.second = 1;

					//  cout << ch << endl;
				}

				else if (nu % 2 == 0)
				{
					cf = ((cf % M) + nu % M) % M;

				}
				else {
					if (c == n - 1 || j == r - 1)
						cf = ((cf % M) + (nu % M)) % M;
					else cf = ((cf % M) + (nu - 1) % M) % M;
				}
			}
			else if (p2.second == 1)
			{
				if (nu == 1)
				{
					//cout << ch << " ";

					p1.second = 1;
					p2.second = 0;

					//  cout << ch << endl;
				}
			}
			++c;
			if (c == n) {p1.second = !p1.second; p2.second = !p2.second; c = 0;}
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
