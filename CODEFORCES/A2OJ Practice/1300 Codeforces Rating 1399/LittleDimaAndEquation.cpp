
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

ll sum(ll x)
{
	ll s=0;
	while (x>0)
	{
		ll r= x%10;
           s+=r;
		x=x/10;
	}
	return s;

}
ll poww(ll a, ll b)
{
    ll res = 1;
    for(ll i = 1; i<=b; ++i)
        res *= a;
 
    return res;
}

void solve()
{
 ll a, b,c;
  cin>>a>>b>>c;
  std::set<ll> v;
  for(ll i=1;i<=81;i++)
  {
  	ll x= (b*poww(i,a))+c;
    if(sum(x)==i && x<1e9)v.insert(x);
  }
  cout<<v.size()<<endl;
  for(ll x: v)cout<<x<<" ";
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
