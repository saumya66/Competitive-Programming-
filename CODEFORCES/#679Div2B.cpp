
#include<bits/stdc++.h>
using namespace std;
typedef  int ll;

void solve()
{
 ll n,m;cin>>n>>m;
 ll c[n*m] ,r[n*m] ;
 ll ar[n][m] ;
 for(ll i=0;i<n;i++)
 {
 	for(ll j=0;j<m;++j)
 	{

 		ll x;
 		cin>>x;
 		--x;
 		 c[x]= j;
 	}

 }
  for(ll i=0;i<m;i++)
 {
 	for(ll j=0;j<n;++j)
 	{
 		ll x;
 		cin>>x;
 		--x;
 		r[x]= j;

 	}

 }
 for(ll i=0;i<n*m;i++)
 {
 	ar[r[i]][c[i]]=i+1;
 }
  for(ll i=0;i<n;i++)
 {
 	for(ll j=0;j<m;++j)
 	{
 		cout<<ar[i][j]<<" ";

 	}
 	cout<<endl;

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
		 
	}

	return 0;
}
