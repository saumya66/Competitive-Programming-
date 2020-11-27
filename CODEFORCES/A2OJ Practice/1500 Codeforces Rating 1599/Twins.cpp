
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n;
 cin>>n;
 std::vector<ll> v(n);
 
ll s=0;

 for(ll & x: v){
 	cin>>x;
 	s+=x;

 }
 s=s/2;
 ll su=0; 
 ll c=0;ll i=n-1;
 sort(v.begin(), v.end());
 while(su<=s && i>=0)
 {
   su+= v[i];
   --i;
   ++c;



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
	 
		solve();
		cout << "\n";
	 

	return 0;
}
