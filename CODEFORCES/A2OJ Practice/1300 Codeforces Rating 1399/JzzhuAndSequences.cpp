
#include<bits/stdc++.h>
using namespace std;
typedef  int ll;
 
void solve()
{
 ll x,y,n;
 
 cin>>x>>y>>n;
ll arr[]= {x-y,x,y,y-x,-x,-y };
 
 ll ans= (arr[n%6]%1000000007+1000000007)%1000000007;
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
