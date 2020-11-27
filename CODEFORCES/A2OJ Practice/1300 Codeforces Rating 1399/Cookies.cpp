
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n;cin>>n;
 std::vector<ll> v(n);
 ll s=0;
 for(ll &x  :v)
 {
 	cin>>x;
 	s+=x;
 }
 ll c=0;

 for (int i = 0; i < n; ++i)
 {
 	if((s-v[i])%2==0)++c;

 }
 cout << c;

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
