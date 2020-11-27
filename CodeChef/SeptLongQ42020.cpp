
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll

ll fp(ll s)
{
  ll a  = sqrtl(1ul+4 *(s));
  a = a -1 ;
  a = a /2 ;
  ll res= a ;
  return res;
}
void solve()
{
  ll n;
  cin>>n;
 // std::vector<ll> v;
  if(n==0 || n==1 || n==2)
  {
  	cout<<"0";
  	return;
  }
 
  ll s=( n*(n+1))/2;
  ll   sb=0 ;
//  cout<<"s= "<<s<<endl;
  if(s%2!=0)
  {
    cout<<"0";
    return ;
  }
  ll c=0,  j=n ;
  ll f = fp(s );
  ll ss = x*(x+1)/2;
  if(s/2==ss){
    ll ans= (f* (f-1ul))/2l+((n-f)*(n-f-1ul))/2l+(n-f);
    cout<<ans;
  }
  else cout<<n-f;
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
