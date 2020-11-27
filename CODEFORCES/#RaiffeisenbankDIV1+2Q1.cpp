
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 
 ll x1,x2,y1,y2;
 cin>>x1>>y1>>x2>>y2;
 ll ans=0;
 if(x1==x2 && y1==y2)
 {
 	cout<<"0";
 	return;
 }
 if(x1==x2 && y1!=y2){
 	ans= abs(y2-y1);

 }
 else  if(x1!=x2 && y1==y2) {
	ans= abs(x2-x1);
 }
 else 
  
 	ans = abs(x1-x2)+ 2+ abs(y1-y2);
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
