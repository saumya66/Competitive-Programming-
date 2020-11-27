
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n;
 cin>>n;
 std::vector<pair<ll ,ll>> v;
 for(ll i=0;i<n;i++)
 {
 	ll a, b;
 	cin>>a>>b; 
 	v.push_back(make_pair(a,b));
 }
 sort(v.begin(), v.end());
 ll ans=-1;
 for(ll i=0;i<n;i++)
 {
 	if(ans<=v[i].second)
 	{
 		ans = v[i].second;

 	}
 	else {
 		ans= v[i].first;
 	}
 }
 cout<<as;
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
