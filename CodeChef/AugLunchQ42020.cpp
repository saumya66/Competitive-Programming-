 
#include<bits/stdc++.h>
using namespace std;
typedef  long double ll;
 ll n,d;
  std::vector<ll> v   ;

bool kills(ll cd)
{
	ll time=0.0;
	for(ll i=0;i<n;i++)
	{
		if(time< v[i]){
             time = v[i];
             time =time+ cd;

		}
		else if(time <=v[i]+d){
			time += cd;

		}
		else 
			return false;
	}
	return true;

}

void solve()
{
 
  v.clear();
  cin>>n>>d;

  for(ll i=0;i<n;i++){
  	ll x;
  	cin>> x;
  	v.push_back(x);
  }
  sort(v.begin(), v.end());
  ll low =0, high=1e18,mid=0;
  for(ll i=0;i<100;i++)
  {
      mid = (low+ high )/2;
     if(kills(mid)){
     	low= mid;
     }
     else 
     	high= mid ;

  }
  cout<< fixed << setprecision(10)<<mid ;

  
 
 
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
