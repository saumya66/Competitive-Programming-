
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n;
 cin>>n;
   if(n==1)
 {
 	cout<<"1";
 	return;
 }
 
  if(n==3)
 {
     cout<<"2 3 1";
 	return;
 }
 if(  !(n&(n-1)) ){cout<<"-1";return;}
 
 
 
 cout<<"2 3 1 ";
  //for(ll y : ans)cout<<y<<" ";
 for (ll i = 4; i <=n; ++i)
 {
 	if(!(i&(i-1)))
 	 {
 	 	//cout<<i<<" ";
         cout<<i+1<<" "<<i<<" ";
        ++i;
 	 }
 	 else {
 	      cout<<i<<" ";
 	 }
  
 	 
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