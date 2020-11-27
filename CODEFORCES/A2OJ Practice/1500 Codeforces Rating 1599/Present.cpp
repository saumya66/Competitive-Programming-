
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n;
 cin >>n;
 std::vector<ll> v(n );
 for(ll &x: v)
 {
   cin>>x;
 }
 std::vector<ll> an(n+1);
 for(ll i=0;i<n;i++)
 {
 	an[v[i]]=i+1  ;
 }
 for(ll i=1;i<=n;i++)cout<<an[i]<<" ";
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
 