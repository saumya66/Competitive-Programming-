
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n;
 cin>>n;
 std::vector<ll> v(n);

 for(ll &x: v)
 {
    cin>>x;

 }
 ll mx= *max_element(v.begin(), v.end());
 ll mn= *min_element(v.begin(), v.end());
 ll ans= mx-mn;
 cout<<ans<<" ";
ll a=0,b=0;
 for(ll &x: v)
 {
    if(x==mx)++a;
    if(mx-x==ans)++b;

 }
 if(ans==0)
 {
 	cout<<(a*(a-1)/2);
 	return;
 }
 cout<<a*b;


 

}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	 
		solve();
		cout << "\n";
	 
	return 0;
}
