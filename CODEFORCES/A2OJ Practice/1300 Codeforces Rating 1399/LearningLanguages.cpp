
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
std::vector<ll> adj[201];
std::vector<bool> vis(201,false);

void dfs(ll n){
	vis[n]=true;
	for(ll x: adj[n])
	{
		if(!vis[x])
			dfs(x);
	}
}

void solve()
{
 ll n, m;
 cin>>n>>m;
 ll p=0;
 for(ll i=1;i<=n;i++)
 {
 	ll k;
 	cin>>k;
 	if(k!=0)p=-1;
 	for(ll j=1;j<=k;j++)
 	{
 		ll l ;
 		cin>>l;
 		adj[i].push_back(l+n);
 		adj[l+n].push_back(i);
 	}
 }
 ll c=0;
 for(ll i=1;i<=n;i++)
 {
     if(!vis[i])
     	{dfs(i);++c;}
     
 }
 cout<<c+p;


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
 