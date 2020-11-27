
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n,k;
 cin>>n>>k;
 std::vector<ll> v(n);
 for(ll &x:v)cin>>x;
 	ll c=0;
 while(true)
 {
 	sort(v.begin(), v.end());
 	if(v[0]>=k || v[1]>=k)
 	{
 		cout<<c;
 		return;
 	}
 	else {
 		v[0]=v[0]+v[1];

 	}
 	++c;

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

