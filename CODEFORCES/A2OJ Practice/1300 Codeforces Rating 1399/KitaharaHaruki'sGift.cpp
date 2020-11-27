
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n;
 cin>>n;
 std::vector<ll> v(n);
 ll a=0, b=0;
 for(ll &x: v)
 {
 	cin>>x;
 	if(x==100)++a;
  
  }
  if( a%2!=0 || (a==0 && n%2==1))
  {
  	cout<<"NO";
  }
  else cout<<"YES";
   
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
