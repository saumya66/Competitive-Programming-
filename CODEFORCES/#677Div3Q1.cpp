
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 string s;
  cin>>s;
 char c= s[0];

 int a= c-'0';
 ll ans=0;
 for(ll i=1;i<a;i++)
 {
 	ans+=10; 
 }
ll l= s.length();
 ans+=(l*(l+1))/2; 
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
