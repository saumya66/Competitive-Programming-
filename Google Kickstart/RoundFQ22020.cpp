
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{ 
	ll n, k;
	cin>>n>>k;
    std::vector< pair<ll,ll> > v;
    for(ll i=0;i<n;i++)
    {
    	ll s, e;
    	cin>>s>>e;
    	v.push_back(make_pair(s,e));
    }
    sort(v.begin(), v.end());
    ll c=0,s=0,e=0;
    for(ll i=0;i<n;i++)
    {
     if(v[i].first >=e)
     {
     	s= v[i].first ;
     	e= s+k;
     	++c;
     	continue;
     }
      if(s<v[i].first && v[i].second<=e)
     {
     	continue;
     }
      if(e>v[i].first && e<v[i].second)
     {
     	s= e;
     	e= s+k;
     	++c;

     }
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
	ll t;
	cin >> t;
	ll t1 = 0;
	while (t1++ < t) {
		cout << "Case #" << t1 << ":" << " ";
		solve();
		cout << endl;
	}

	return 0;
}
