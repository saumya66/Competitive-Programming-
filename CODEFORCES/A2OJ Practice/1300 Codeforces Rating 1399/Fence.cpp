
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n,k;
 cin>>n>>k;
 std::vector<ll> v(n);
 for(ll &x:v)cin>>x;
 	std::vector<ll> s(n+1);
  
 ll su=0;
 s[0]=0;
  for(ll i=1;i<=n;i++)
 {
 su+=v[i-1];
 //cout<<su<<" ";
   s[i]=su;
 }
 //for(ll x:s)cout<<x<<" ";
 ll ans=0;
 ll m=1e9;
 ll j=0;
 for(ll i =0;i<=n-k ;i++)
 	{
 	 
 		if( s[i+k]-s[i]<s[j+k]-s[j])
 		{
 			j=i;
 		}
 	}
 	 cout<<j+1;
 	 
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
