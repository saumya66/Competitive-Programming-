
#include<bits/stdc++.h>
using namespace std;
typedef int ll;
 std::vector<pair<ll,ll>> v;
void solve()
{
 ll n;cin>>n;

 for (ll i = 0; i < n; ++i)
 {
 	ll a, b;
 	cin>>a>>b;
 	v.push_back(make_pair(a,b));
 }
 
 sort(v.begin(), v.end());
 if((v[0].first < v[n-1].first) && (v[0].second>v[n-1].second)){ 
  	 	cout<<"Happy Alex";
  	 	return;
   }
 cout<<"Poor Alex";
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
