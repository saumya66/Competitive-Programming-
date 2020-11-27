
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 
   string s;
 cin>>s;
 ll l =s.length();
 
 if(l>10){
 	string ans ;
 	ans = ans+ s[0];
 	ans=ans+ to_string(l-2);
 	ans=ans + s[l-1];
 	cout<<ans ;
 }
 else {
 	cout<<s;

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
	 ll n;
	 cin>>n;
 for(ll i=0;i<n;i++)
 {
		solve();
		cout << "\n";
	}
	 

	return 0;
}
