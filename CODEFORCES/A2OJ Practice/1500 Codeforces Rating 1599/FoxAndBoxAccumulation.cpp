
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n;
 cin>>n;
 std::vector<ll> v(n);

 for(ll &x: v )cin>>x;
 	ll c=1;
 sort(v.begin(), v.end());
ll p=-1;

for (ll i =0; i<n; i++)
{
 if(v[i]==0)
 {
 	 ++p;
 }
 else break;
}
if(p>=0)
	cout<<p+1;
  else cout<<1;


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
	