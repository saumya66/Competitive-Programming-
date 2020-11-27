
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n,x;
 cin>>n>>x;
 if(n<=2)
 {
 	cout<<"1";
 	return;
 }
 else {
 	ll c=1;
 	ll f=1;
 	while(f*x+2< n)
 	{
 		++f;
 		++c;
 	}
 	cout<<c+1;
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
