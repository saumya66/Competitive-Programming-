
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
  ll n,q;
  cin>>n>>q;
  ll a[n];
   for(ll i=0;i<n;i++)
    cin>>a[i];
  ll d[n+1]={0};
  while(q--)
  {
    ll l,r;
    cin>>l>>r;
    l--;
    d[l]+=1;
    d[r]-=1;
  } 
  for(ll i=0;i<=n;i++)
  d[i+1]+=d[i]; 
  sort(a,a+n,greater<ll>());
  sort(d,d+n,greater<ll>());
   
  ll ans=0;
  for(ll i=0;i<n;i++)
  {
    ans+=a[i]*d[i];
  }
  cout<<ans;
}
int  main()
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
