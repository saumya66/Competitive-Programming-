
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n,m;
 cin>>n>>m;
 std::vector<ll> v(m);
 for(ll &x: v)cin>>x;
 	sort(v.begin(), v.end());

 ll mi=1e9;
 for (ll i =0 ; i+n-1 < m; ++i)
 {
 //	cout<<v[i]<<" "<<v[i+n-1]<<endl;
 mi= min(mi,v[i+n-1]-v[i]);
//cout<<mi<<" "<<endl;

 }
 cout<<mi;
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
