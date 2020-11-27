
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n,m;
 cin>>n>>m;
 set<ll> s;
 for(ll i=0;i<m;i++)
 {
    ll a, b;
    cin>>a>>b;
    s.insert(a);
    s.insert(b);
 }
 ll d;
 for (int i = 1; i <= n; ++i)
 {
    if(!s.count(i))
    {
   d=i;
   break;
    }
 }
 cout<<n-1<<endl;
 for(ll i=0;i<n;i++)
 {
 	if(i+1!=d)
 	cout<<d<<" "<< i+1<<endl;
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
	 
		solve();
		cout << "\n";
	 

	return 0;
}
