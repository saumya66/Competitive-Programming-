
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n,m;
 cin>>n>>m;
 std::vector<ll> v(m);
 ll ans=0;
 for(ll &x : v)cin>>x;
 	 ll pr=1;

 	for(ll i=0;i<m;i++)
 	{
 		if(v[i]>pr)
 		{
 			ans+= v[i]-pr;


 		}
 		else if(v[i]< pr)
 		{
 			ans+=(n-pr)+v[i];
 		}
 		pr= v[i];



 	}
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
	 
		solve();
		cout << "\n";
	 
	return 0;
}
