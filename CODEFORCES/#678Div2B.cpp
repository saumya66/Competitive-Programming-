
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n;
 cin>>n;
 for(ll i=0;i<n;i++)
 {
 	for(ll j=0;j<n;j++)
 	{

 		if(i==j || i==j+1 || i==j-1)cout<<"1 ";
 		else cout<<"0 ";
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
	ll t;
	cin >> t;
	while (t-- > 0)
	{
		solve();
		cout << "\n";
	}

	return 0;
}
