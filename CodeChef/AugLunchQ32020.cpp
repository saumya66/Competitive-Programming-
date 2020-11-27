
#include<bits/stdc++.h>
using namespace std;
typedef  int ll;

void solve()
{
  ll n, m;
  cin>>n>>m;
  std::vector<ll> in(n);
  for(ll &x: in)
  {
  	cin>>x;

  }
 ll sc[n][m];
 map<ll,ll> mxp;


  for(ll i=0;i<n;i++)
  {
  	 ll mx=0;
  	for(ll j=0;j<m;j++)
  	{
  		ll t;
  		cin>>t;
  		sc[i][j]= t+ in[i];
  		in[i]= sc[i][j];
  		mx = max(mx, sc[i][j]);
  	}

  	mxp[i]= mx;
  }
 /* for(ll i=0;i<n;i++)
  {
  	for(ll j=0;j<m;j++)
  	{
  		cout<<sc[i][j]<<" ";
  	}
  	cout<<endl;
  }
*/
  ll rank[n][m];
  for (ll i = 0; i < n; ++i)
  {
  	 for(ll j=0;j<m;j++)
  	 {
  	 	
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
