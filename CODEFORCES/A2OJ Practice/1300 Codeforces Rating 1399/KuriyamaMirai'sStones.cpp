
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n;
 cin>>n;
 std::vector<ll> v(n);
 for(ll &x: v)cin>>x;
 	ll t;
	cin >> t;
	ll au[n+1];
	ll as[n+1];
     au[0]=0;
     as[0]=0;    
     ll s=0;
	for(ll i=0;i<n;++i)
	 {
		 s+=v[i];
		 au[i+1]= s;

	 }
	 
	std::vector<ll> v1;
	ll s1=0;
			v1=v;
			sort(v1.begin(), v1.end());
			for (ll j = 0; j < n; ++j)
			{
				s1+= v1[j];
				as[j+1]=s1;

			}
	 
	 
	while (t-- > 0)
	{
		ll t, l,r ,s=0;
		cin>>t>>l>>r;
		if(t==1)
		{
			 cout<<au[r]-au[l-1];

		}
		else{
				 cout<<as[r ]-as[l-1];
		}
		cout<<endl;

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
