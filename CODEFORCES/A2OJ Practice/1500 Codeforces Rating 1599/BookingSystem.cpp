
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
 
 std::vector<ll> r  ;

bool desSort(const pair<ll,ll>a, const pair<ll,ll> b)
{
	return a.first>b.first;
}

bool search(ll x )
{
	ll i=0;
	if(r.size()==0)return false ;
  while(i<r.size() && x>r[i])
  {
  	++i;
  }
  return true ;
}

void solve()
{
 ll n,s=0;
 cin>>n;
 std::vector<pair<ll,ll>> v(n);
 for(ll i=0;i<n;i++)
 {
 	ll a, b;
 	cin>>a>>b;
 	v.push_back({b,a});
 }
 ll k;cin>>k;

 for(ll i=0;i<k;i++){ll x;cin>>x;r.push_back(x);}
 	sort(r.begin(), r.end());
 sort(v.begin(), v.end(),desSort );
 ll c=0;
 for(ll i=0;i<n;i++)
 {
 	ll np= v[i].second;
 	if(np>r[k-1])continue;
 	else {
 	  if(search(np )){
 	  	s+=v[i].first;
              ++c;
 	  }
 	  else continue;
 	}


 }
 cout<<c<<" "<<s;
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
