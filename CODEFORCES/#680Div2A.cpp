
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n ,x;
 cin>>n>>x;
 std::vector<ll> a(n),b(n);
 for(ll &x: a)cin>>x;
 	for (ll &x: b)cin>>x;
 		sort(b.begin(), b.end(),greater<int>());
 	// for(ll x:b)cout<<x<<" ";
 	// 	cout<<endl;
 	for(ll i=0;i<n;i++)
 	{
 		if(a[i]+b[i]>x){
 			cout<<"No";return;
 		}
 	}
 	cout<<"Yes";


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
