
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n;
 cin>>n;
 ll ma=-1;
  std::vector<ll> m(100001,0);
 for(ll i=0;i<n;i++)
 {
   ll x;
   cin>>x;
   m[x]++;
   ma= max(ma, x);
 }
 std::vector<ll> v(100001,0);
 v[0]=0;
 v[1]=m[1];
 for(ll i=2;i<100001;i++)
 {
   v[i]= max(v[i-1],v[i-2]+(m[i]*i));

 }
 cout<<v[ma];
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
