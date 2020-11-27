
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
  ll n;
  cin>>n;
  std::vector<ll> v(n);
  for(ll &x: v)
  {
  	cin>>x;

  }
  ll c=0;
  ll mn=v[0];
 ll mx=mn;
  for(ll i=1;i<n;i++)
  {
  	if(v[i]<mn){++c;mn= v[i];}
  	else if(v[i]>mx){++c;mx= v[i];};



  }
  cout<<c;


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
