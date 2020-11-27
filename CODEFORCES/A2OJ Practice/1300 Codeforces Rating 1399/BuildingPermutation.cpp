
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n;
 cin>>n;
std::vector<ll> v(n);
ll c=0;
for(ll &x: v){cin>>x; }
	sort(v.begin(), v.end());
for(ll i=0;i<n;++i)
{
  c+=abs((i+1)-v[i]);
 
}
cout<<c;

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
