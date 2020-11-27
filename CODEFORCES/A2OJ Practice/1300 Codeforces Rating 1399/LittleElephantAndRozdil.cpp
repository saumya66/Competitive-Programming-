
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n;
 cin>>n;

 std::vector<ll> v(n);
 for(ll & a: v)cin>>a;
 	std::map<ll, ll> m;
 	ll ans=1e10;
 ll t=0;
 ll f=0;
 	for(ll i=0;i<n;i++)
 	{
      if(v[i]<  ans)
      {
      	ans=v[i];
      	t=i+1;
      
      }
      else if (ans==v[i]){
          ++m[v[i]];
       

       }
 
 	}
 	 
 	 
 	if(m[ans]>0){
 			cout<<"Still Rozdil" ;
 	}
 	else
 	cout<<t;

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
