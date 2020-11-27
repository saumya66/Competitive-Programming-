
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n,t;
 cin>>n>>t;
 std::vector<pair<ll ,ll>> v;
 for(ll i=0;i<n;i++)
 {
 	ll x;
 	cin>>x;
 	v.push_back(make_pair (x, 0));
 }
 sort(v.begin(), v.end());
 for(ll i=0;i<n-1;i++)
 {
 	if(v[i].first+v[i+1].first!=t){`

 		v[i].second=1;
 		v[i+1].second=1;
 	}
 	else break;
 }
 for(ll i=0;i<n;i++)
 {
 	cout<<v[i].second<<" " ;
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
 