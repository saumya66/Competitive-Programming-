
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n;
 cin>>n;
 
 ll ar[n];
 for(ll i=0;i<n-1;i++)
 {
 	ll u,v;
 	cin>>u>>v;
 	ar[v-1]++;
 }
 ll c=0;
 for(ll i=0;i<n;i++)
 {
 	if(ar[i]==0)c++;
 }
 cout<<c-1;
  

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
