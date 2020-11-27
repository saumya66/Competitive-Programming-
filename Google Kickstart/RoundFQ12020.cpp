
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	 ll n,m;
	 cin>>n>>m;
	 std::vector<ll> v(n);
	 for(ll &x: v)
	 	cin>>x;
	 std::vector<ll> l ;
	 while(l.size()!=n)
	 {
	 	for(ll i=0;i<n;i++)
	 	{
	 		if(v[i]<=m)l.push_back(i+1);
	 		else {
	 			v[i]=m-v[i];
	 		}
	 	}
	 }
    for(ll x: l)
    {
    	cout<<x<<" ";
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
	ll t1 = 0;
	while (t1++ < t) {
		cout << "Case #" << t1 << ":" << " ";
		solve();
		cout << endl;
	}

	return 0;
}
