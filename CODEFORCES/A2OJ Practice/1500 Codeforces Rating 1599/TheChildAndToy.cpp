
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n,m,s=0;
 cin>>n>>m;
 std::vector<ll> v(n);
 for(ll &x: v)cin>>x;
 while(m-->0)
 {
 	ll x,y;
 	cin>>x>>y;
 	s+= min(v[x-1],v[y-1]);
 }
 cout<<s;

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
 