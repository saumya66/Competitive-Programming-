
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n;
 ll k;
 cin>>n>>k;

 ll ar[n][n];
 for(ll i=0;i<n;i++)
 {
 	for (ll j= 0; j <n ; ++j)
 	{
 		if(i==j)ar[i][j]=k;
 		else ar[i][j]=0;
 	}
 }
  for(ll i=0;i<n;i++)
 {
 	for (ll j= 0; j <n ; ++j)
 	{ 
 		cout<<ar[i][j]<<" ";
 		
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
	