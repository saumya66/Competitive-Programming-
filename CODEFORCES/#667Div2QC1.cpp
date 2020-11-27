
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

 

void solve()
{
 ll n;
 cin>>n;
 ll w;
 cin>>w; 
 std::vector<ll> a(n);
 for(ll &x: a)cin>>x;
 ll ans=0,f=0;
 for(ll i=1;i<n;i++)
 {
 	if(f==0)
 	{
 		if(a[i]<a[i-1])
 		{
 			ans+= a[i-1];
 			f=1;

 		}

 	}
 	else 
 	{
 		if(a[i]>a[i-1])
 		{
 			ans-= a[i-1];
 			f=0;
 		}

 	}
 	//cout<<ans<<endl;
 }
 if(f==0)
  {
 			ans+=a[n-1];
 		}

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
	ll t;
	cin >> t;
	while (t-- > 0)
	{
		solve();
		cout << "\n";
	}

	return 0;
}
