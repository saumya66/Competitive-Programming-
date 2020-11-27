 
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
 ll n;
 cin>>n;
 ll ar[n][n];
 for(ll i=0;i<n;i++)
 {
 	for(ll j=0;j<n;j++)
 		cin>>ar[i][j];

 } 
 ll s=0,m=0,a=0;
 for(ll i=0;i<n;i++)
 {
 	s=0;
 	a=i;
 	for(ll j=0;j<n-i;j++)
 	{
 		s+= ar[a][j];
 		// cout<<ar[a][j]<<" ";
 		++a;

 	}
 	 

 	m= max(s,m);
 }
 s=0;a=0;
  for(ll i=1;i<n;i++)
 {
 	s=0;
 	a=i;
 	for(ll j=0;j<n-i;j++)
 	{
 		s+= ar[j][a];
 		// cout<<ar[j][a]<<" ";
 		++a;

 	}
 	//cout<<endl;

 	m= max(s,m);
 }
 cout<<m;
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
	ll t1 = 0;
	while (t1++ < t) {
		cout << "Case #" << t1 << ":" << " ";
		solve();
		cout << endl;
	}

	return 0;
}
