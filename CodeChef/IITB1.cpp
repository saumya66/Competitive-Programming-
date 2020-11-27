
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n,k;
cin>>n>>k ;
 ll s=0;
 std::vector<ll> v;
 for(ll i=0;i<n;i++)
 {
 	ll x;
 	cin>>x;
 	v.push_back(x);
 	s+= x;
  

 }
ll ans=0;
 if(k<=n)
 {

 	for(int i=0;i<k;i++)
 	{
       ans+=v[i];
 	}
 	cout<<ans%1000000007;
 }
 else {
 	ll c=k/n ;
 	ans= c*s;
 	ll rem= k%n;
 	if(c%2==0)
 	{
 		for(ll i=0;i<rem;i++)
 	    {
 		ans+=v[i];
 	    }
 	}
 	else {
 		rem= n-rem;
 		for(ll i=n-1;i>=rem;--i)
 	    {
 	      	ans+=v[i];
 	    }

 	}
  
 	cout<<ans%1000000007;

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
