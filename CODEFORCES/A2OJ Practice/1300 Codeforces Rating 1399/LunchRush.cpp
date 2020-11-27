
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n,k;
 cin>>n>>k;
 std::vector<pair<ll ,ll>> v ;
 for( ll i=0;i<n;i++)
 {
 	ll a, b;
 	cin>>a>>b;
 	v.push_back(make_pair(a,b));

 }
 ll m=-1e9;
 for(ll i=0;i<n;i++)
 {
 	if(v[i].second>k)
 	{
 		m= max(m, v[i].first-(v[i].second-k));
 	}
 	else m= max(m, v[i].first );
 }
 cout<<m;


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
