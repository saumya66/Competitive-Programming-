
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n;
 cin>>n;
std::vector<ll> s(n);
ll z=0;
for(ll &x:s){cin>>x;if(x==1)++z;}
 
 ll c=0;
 ll f;
 	if(s[0]==1){f=1; }
 	if(s[0]==0){f=0; }
 	ll c1=0;
 for(ll i=0;i<n;i++)
 {
     if(s[i]==1)++c1;
     if(c1==z)break;
 	if(f==1)
 	{
 		if(s[i]==0){++c; }
 		else continue;
 	}
 	if(f==0)
 	{
 		if(s[i]==1){f=1; }
 		
 	}
 	//cout<<f<<endl;

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
	while (t-- > 0)
	{
		solve();
		cout << "\n";
	}

	return 0;
}
