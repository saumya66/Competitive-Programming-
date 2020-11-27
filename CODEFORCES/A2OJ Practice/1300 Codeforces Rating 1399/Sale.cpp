
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
  ll n,m;
  cin>>n>>m;
  std::vector<ll> e;
  for(ll i=0;i<n;i++)
  {
  	ll x;
  	cin>>x;
  	if(x<0)
  		e.push_back(x);
  }
   if(e.empty())
   	cout<<"0";
   else
   {
   	sort(e.begin(), e.end());
   ll ans=0;
   	for(ll i=0;i<e.size();i++)
   	{
   		if(m>0)
   		{
   			ans+= abs(e[i]);
   			--m;
   		}
   	}
   	cout<<ans;

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
