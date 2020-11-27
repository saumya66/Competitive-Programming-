 
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	 string s;
	 cin>>s;
	 ll k=0,ans=0;
	 ll n= s.length();
	 for(ll i=0;i<=n-5;i++)
	 {
	 	if(s.substr(i,4)=="KICK")
	 	{
	 		++k;//cout<<k<<endl;
	 	}
	 	else if(s.substr(i,5)=="START")
	 		{
	 			ans+=k;
	 		}
	 }
	 cout<<ans;
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
