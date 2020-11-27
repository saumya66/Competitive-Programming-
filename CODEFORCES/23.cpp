
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n;
 cin>>n;
 for(ll i=0;i<n;i++)
 {
 	for(ll j=0;j<n/2;j++)
 	{
 		for(ll k=0;k<n/2;k++)
 		{
 			if(i*3 + j*5 + k*7== n)
 			{
 				cout<<i <<" "<<j<<" "<<k;
 				return;
 			}
 		}
 	}
 }
 cout<<"-1";
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
