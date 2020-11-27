
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
std::vector<ll> adj[1225];
bool vis[1225]={false};
std::vector<ll> vec,ans;
std::vector<std::vector<ll>> v[1225];

void add(ll x)
{
  for(ll n : v[x].back())
  {
  	ans.push_back(n);
  }
  v[x].pop_back();
}

void dfs(ll x)
{
   
  	vis[x]=true;
  	vec.push_back(x);

  for(ll i=0;i<adj[x].size();i++)
  {
  	if(!vis[adj[x][i]])
  	dfs(adj[x][i]);
  }
}

void solve()
{
 ll n,m;
 cin>>n>>m;
 for(ll i=0;i<m;i++)
 	{
 		ll a, b;
 		cin>>a>>b;
 		adj[--a].push_back(--b);
 		adj[b].push_back(a);


    }
    for(ll i=0;i<n;i++)
    {
    	if(!vis[i]){
    	    	vec.clear();
    	    	dfs(i);
    	    	if(vec.size()>3){
    	    		cout<<"-1";return;    	
    	    	}
    	    	v[vec.size()].push_back(vec);
    	     }
   }
   if(v[2].size()>v[1].size())
   {
   	cout<<-1;
   	return;
   }
   while(v[3].size())
   {
   	add(3);
   }
   while(v[2].size())
   {
   	add(2);
   	add(1);
   }
   while(v[1].size())
   {
   	add(1);
   }
   for(ll i=0;i<n;i+=3)
   {
     cout<<ans[i]+1<<" "<<ans[i+1]+1<<" "<<ans[i+2]+1<<endl;
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
	 
		solve();
		cout << "\n";
	 

	return 0;
}
