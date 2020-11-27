
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n,m;
 cin>>n>>m;

 ll  a=0, d=0;
 std::vector<ll> v;
 for(ll j=0;j<n;j++)
 for(ll i=0;i<4;i++)
 {
 	ll x;
 	cin>>x;
 	v.push_back(x);
 	 
 	if(i==3)
 	{
 		if(v[0]==v[1] && v[1]==v[2] && v[2]==v[3])a=1;
     
     else if(v[1]==v[2] &&  v[0]==v[3] && v[1]!=v[0])d=1;
     v.clear();
 	}

 }
 if(m%2!=0)
 	{cout<<"NO";
      return ;}
 if(a==1 || d==1)
{
	cout<<"YES";
	 
}
  
else {
	cout<<"NO";
}


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
