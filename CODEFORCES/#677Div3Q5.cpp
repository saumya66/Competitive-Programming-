
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

ll fact(ll x)
{
	if(x==0|| x==1)
		return 1;
	else return x*fact(x-1);
}
void solve()
{
 ll n;
 cin>>n;
 ll ans=0;
 
 ans = ((fact(n)/(fact(n/2)*fact(n/2)))/2*fact(n/2-1)*fact(n/2-1)) ;
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
	 
		solve();
	 

	return 0;
}
