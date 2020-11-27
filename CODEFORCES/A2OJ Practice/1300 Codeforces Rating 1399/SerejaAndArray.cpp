
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n,m;
 cin>>n>>m;
 std::vector<ll> v(n);
 for(ll &x: v)
 {
 	cin>>x; 

 }
 ll c=0,s=0;
 for(ll i=0;i<m;i++)
 {
 	ll t;
 	cin>>t;
 	if(t==1)
 	{
 		ll vi, x;
 		cin>>vi>>x;
 		v[vi-1]=x-s;

 	}
 	else if(t==2)
 	{
 		ll y;
 		cin>>y;
 		 s+=y;
 	}
 	else if(t==3)

 	{
 		ll q;
 		cin>>q;
 		 cout<<v[q-1 ]+s<<endl;
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
 
		solve();
		cout << "\n";
	 

	return 0;
}
