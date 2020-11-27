
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n,k;
 cin>>n>>k;
 std::vector<ll> v(n);
 for(ll &x: v)cin>>x;
 	ll m=0,c=0;
 for(ll i=1;i<n;i++)
 {
 	if(abs(v[i]-v[i-1])<=k){
 		++c;
 		m=max(m,c);
 	}else c=0;
 }
if(m==0)
{
	cout<<"-1";
	return;
}
else cout<<m+1;
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
