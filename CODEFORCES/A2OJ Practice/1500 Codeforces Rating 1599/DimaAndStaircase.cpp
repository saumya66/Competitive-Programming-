
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n;
 cin>>n;std::vector<ll> v(n);
 for(ll &x: v)cin>>x;
 ll b;
 cin>>b;

ll  mxh=v[0];
 for(ll i=0;i<b;i++)
 {
 	ll a, b;
 	cin>>a>>b;
 	// v.push_back({a,b});
 	ll wh= v[a-1];

 	mxh= max(mxh, wh);
 	cout<<mxh<<endl;
 	mxh+=b;

 	

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
 
	 
		solve();

	return 0;
}
 