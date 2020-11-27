
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

 

 


void solve()
{
 ll n;
 cin>>n;
 if(n==1)
 {
 	cout<<"NO";
 	return;
 }
 
 ll sq= sqrt(n);
  
ll i=0;

if(sq*sq== n)

{
	for(  i=2;i*i<sq;i++)
 {
 	if(n%i==0)break;

 }
 
 if(i*i>sq)cout<<"YES";
 else cout<<"NO";

}
else cout<<"NO";
 
 


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
