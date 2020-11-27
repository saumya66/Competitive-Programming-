
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
ll n;
 cin>>n;
 double ans;
 std::vector<ll> v(n);
 for(ll &x: v)cin>>x;

 for(ll i=0;i<n;i++)
 {
 	if(i%2==0)
 	{
 		cout<<-v[i+1]<<" ";
 	} 
 	else {
 		cout<<v[i-1]<<" ";
 	}
 }
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
