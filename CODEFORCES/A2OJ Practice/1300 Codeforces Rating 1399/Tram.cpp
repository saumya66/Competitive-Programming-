
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
  ll n;
  cin>>n;
 
  ll m=0 ;
  ll tb=0,t=0;
  for( ll i=0;i<n;i++)
  {
  	ll a, b;
  	cin>>a>>b;
  	if(i==0)
  	   t=b;
  	else {
  		t=(tb-a)+b;
  	}
  	tb=t;
  	m= max(m, t);

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
 
		solve();
		cout << "\n";
	 

	return 0;
}
