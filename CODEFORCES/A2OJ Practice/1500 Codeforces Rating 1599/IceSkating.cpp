
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
bool vis[101] ={0};
 ll n;
 ll x[101],y[101];

void dfs(ll a)
{
	vis[a]=1;
	for(ll i=1;i<=n;i++)
	{
		 if((x[i]==x[a] || y[i]==y[a]) && !vis[i])dfs(i);
	}
}

void solve()
{

 cin>>n;
 ll c=-1; 
 for(ll i=1;i<=n;i++ )
 {
 cin>>x[i]>>y[i];

 
 }
 for(ll i=1;i<=n;i++)
 {
 	if(!vis[i]){dfs(i);++c;}
 }
 cout<<c ;


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
