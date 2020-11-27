
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n,k,l;
 cin>>n>>k>>l;
 if(k==1 && n>1){cout<<"-1";return;}
  if(l==1 && n>k){cout<<"-1";return;}
 if(n<=k*l)
 {
 	ll x=1;
 	for(ll i=0;i<n;i++)
 	{

     cout<<x<<" ";
     ++x;
     if(x==k+1)x=1;
 	}
 }
 else cout<<"-1";

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
