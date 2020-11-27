
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n,d;
 cin>>n>>d;
 std::vector< vector<ll> > v(n);
 for(ll i=0;i<n;i++ )
 {
 	 
 	for(ll j=0;j<d;j++)
 	{
 		ll x;
 		cin>>x;
 		v[i].push_back(x);
 	
 	}
 }
 
 std::vector<std::vector<ll> > w(n,std::vector<ll>(n));
 for(ll i=0;i<n;i++)
 {
 	for(ll j=0;j<n;j++)
 	{

 		if(i==j)
 		{
 			w[i][j]=0;
 		}
 		else {
 			ll a=0;
 			for(ll k=0;k<d;k++)
 			{
                a+=abs(v[i][k]-v[j][k]);

 			}
 		 
 			w[i][j]= -a;
 		}
 	}
 }

 for(ll i=0;i<n;i++)
 {
 	for(ll j=0;j<n;j++)
 	{
       cout<<w[i][j]<<" ";
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
