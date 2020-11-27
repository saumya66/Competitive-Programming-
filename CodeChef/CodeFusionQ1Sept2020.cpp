
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll a ,d, k, n, inc;
 cin>>a>>d>>k>>n>>inc;
 ll sum=a;
 ll e=1;

 for (ll i = 1; i <n; ++i)
 { 
 	if(e==k)
 	{
 		e=0;
 		d+=inc;

 	}
 	sum+= d;
 	cout<<sum<<endl;
 	++e;


 }
 cout<<sum;

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
