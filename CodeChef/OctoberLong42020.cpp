
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

ll findp(ll n,ll x,ll p, vector<ll> v ){
 
  	ll mn  = 1e8;
  	ll mpos;
	for(ll i=0;i<n;i++){
        if(v[i] == x) {
        ll dif= abs(p-i);
		if(dif < mn) {
		mn = dif;
		mpos = i;
	   }
       }
   }
  return mpos;
}
void solve() {

	ll n, x, p, k,c=0,pos=0;
	cin >>n>>x>>p>>k;
	std::vector<ll> v ;
	for(ll i=0;i<n;i++)
		{ll a;
			cin>>a;
            v.push_back(a);
		}
	sort(v.begin(), v.end());
	  pos = findp(n,x,p,v);
	 
	if(v[pos]!=x) {
	v[k-1] = x;
	sort(v.begin(), v.end());
	c++;
	}
	if(v[p-1] == x) {
	cout << 0+c;
	return;
    }
    if(p < k && v[p-1] < x) {
	cout << "-1";
	return;
	}
    if(p > k && v[p-1] > x) {
	cout << "-1";
    return;
    }
	pos =findp(  n, x, p,v) ;
	++pos;
	ll ans = abs(p-pos) ;
	cout <<ans+c;
}
 
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	/*
	 #ifndef OnLInE_JUDGE
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
 