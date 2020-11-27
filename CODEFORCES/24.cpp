
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n,k;
 cin>>n>>k;
 std::vector<ll> v(n);
 for(ll &x: v)cin>>x;
 	sort(v.begin(), v.end());
 if(k==0){
 	cout<<v[n-1]-v[0];
 	return;
 }
 ll a=k;
 --a;
 while(a-->0)
 {
 	v[n-1]+=v[a];
 }
 cout<<v[n-1]-v[a];
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
