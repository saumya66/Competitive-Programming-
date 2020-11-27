
#include<bits/stdc++.h>
using namespace std;
#define pb                push_back
typedef  long long ll;
std::vector<pair<ll,ll >> fc;

void factors(ll x)
{
	ll q= x;
	for(ll i=2;i*i<=x;i++)
	{
		if(q%i==0)
		{
	       	c=0;
     		while(q%i==0)
     		{
     			q=q/i;
     			++c;
     		}

	      fc.pb({i,c});	
		}
		if(q>1)fp.pb({q,1});
	 
	}

}

void solve()
{
ll p,q;
cin>>p>>q;
ll ans=p;
ll orgp=p;
factors(q);
for(auto x: fc)
{

	ll f= x.first ;
	ll c=x.second;
	ll cnt=0;
	while(p%f==0)
	{
		p=p/f;
		++cnt;
	}
	ll ma= max(cnt-c+1,0);
	ll val =1;
	for(ll i=0;i<ma;i++)
	  val = val*f;
	if(val <ans)ans= val;

}
cout<<orgp/p;
 

 
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
