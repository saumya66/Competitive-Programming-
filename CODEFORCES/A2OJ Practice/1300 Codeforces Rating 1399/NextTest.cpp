
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
  ll n;
  cin>>n;
  std::vector<ll> v(n);
  ll mi=1e9;
  for(ll &x : v)
  {
  	cin>>x;
  	mi= min(mi,x);
  }
  if(mi>1){cout<< "1";
return ;}
else {
	sort(v.begin(), v.end());
	for(ll i=0;i<n-1;i++)
	{
		if(v[i+1]!=v[i]+1){
			cout<<v[i]+1;
			return;
		}
	}
	cout<<v[n-1]+1;
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
