
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n,c1=0,c2=0;
 cin>>n;
 std::vector<ll> v ;
 
 std::set<ll> s;
 for(ll i=0;i<n;i++)
 {
 	ll x;
 	cin>>x;
 	v.push_back(x);
 	if(i==x)
 	{
 		++c1;
 		s.insert(i);
 	}
 	else{
 		if(x<n){c2=1;}
 	}

 }


 for( ll i=0;i<n;i++)
 {
 	if(!s.count(i) && !s.count(v[i]))
 	    if(i==v[v[i]]) c2=2;
 }
 cout<<c1+c2;
 
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

