
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n,s,t;
 cin>>n>>s>>t;
 
  vector<ll> wp ;
 
 for(ll i=0;i<n;i++){
 	
 	ll x;
 	cin>>x;
      wp.push_back(--x);
   
 }
 if(s==t){
 	cout<<"0";
 	return;
 }
 s=s-1;
 --t;
 for(ll i=1;i<=n;i++)
 
 {
 	s= wp[s];
 	if(s==t){
 		cout<<i;
 		return;

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
	 
		solve();
		cout << "\n";
	 
	return 0;
}
 