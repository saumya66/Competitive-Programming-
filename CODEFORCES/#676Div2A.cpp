
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll a, b;cin>>a>>b;
 
 ll m=min(a,b);
 ll ans=(a^m)+(b^m);
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
