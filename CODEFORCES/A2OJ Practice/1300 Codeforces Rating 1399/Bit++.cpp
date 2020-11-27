
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll n;

cin>>n;
 ll x=0;
 for(ll i=0;i<n;i++)
 {
 	 string s;
 cin >>s;
 size_t found= s.find("++");
 if(found!= string::npos)
 {
 	x++;
 }
 else {
 	--x;
 }

 }
  cout<<x ;



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
