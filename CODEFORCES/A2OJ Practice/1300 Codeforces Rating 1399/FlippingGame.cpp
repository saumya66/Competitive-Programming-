
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n;
 cin>>n;
 std::vector<ll> v ;
ll c1=0;
ll m=0;
 for (ll i = 0; i < n; ++i)
 {
 	ll x;
 	cin>>x;
 	if(x==1)++c1;
 	if(x==1)v.push_back(-1);
 	else v.push_back(1);
  

 }
 if(c1==n)
 {
 	cout<<n-1;
 	return;
 }
 ll s=0;
 ll z=0;
 for(ll i=0;i<n;i++)
{
  s= max(z,s+v[i]);
  m=max(s,m);
}
 cout<<m+c1;
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
