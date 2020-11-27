
#include<bits/stdc++.h>
using namespace std;
typedef  double ll;

void solve()
{
 ll n;
 cin>>n;
 std::vector<ll> v(n);
 ll s=0.0;
 for(ll &x: v){
 	 	cin>>x;
 	s+= x;



 }
  ll ans = s/n;
  cout<<fixed<<setprecision(12)<<ans;

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
