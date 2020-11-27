
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n,k;
 cin>>n>>k;
 std::vector<ll> v(n);
 for(ll &x:v)cin>>x;
 	for(ll i=0;i<n-1;i++)
 	{
 	
 	if(v[i]<k)
 	{
 		cout<< i+1;
return;
 	}
 	else  
 	{ 
 		v[i+1]+=(v[i]-k);

 	} 
 	}
 	if(v[n-1]<k)
 	{
 		cout<<n;
 		return;
 	}
 	else {
 		cout<<v[n-1]/k+1;

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
