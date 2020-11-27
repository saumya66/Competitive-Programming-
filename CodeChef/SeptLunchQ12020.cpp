 
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n;
 cin>>n;
 std::vector<ll> v(n);
 ll f=0,s=0,p=0;
 for(ll i=1;i<=n;i++)
 { 
 	ll x;
 	cin>>x;
 	 s+=x;


 }
 if(s==0)
 {
 	cout<<"YES";
 	 
 }
 else
 {
  if(s<0)
  {
  	cout<<"NO";

  }
  else cout<<"YES";
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