
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n;cin>>n;
 vector<pair<ll ,ll >>p(n);
 for(ll i=0;i<n;i++)
 {

 	cin>>p[i].first;
 }
 
 for(ll i=0;i<n;i++)
 {
 	cin>>p[i].second;
 
 }
 sort(p.begin(), p.end());
 
 ll mx=0;
 ll s=0;
 ll ans=1e9;
for(ll i=0;i<n;i++)
{
 mx= max(p[i].first, s);
 s+=p[i].second;
  ans= min(ans, mx);
cout<<mx<<" "<<ans<<endl;
}
ans= max(ans, mx);
cout<<ans;

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
