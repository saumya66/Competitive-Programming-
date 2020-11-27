
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 string s;
 cin>>s;
 ll f=0;
 string ans;
 for(ll i=0;i<s.length();i++)
 {
 	if(s[i]=='0' && f==0){
 		f=1;
 		continue;
 	}
 	else ans+=s[i];
 }
 if(f==0)
 {
 	cout<<ans.substr(0,ans.length()-1);
 }
 else 
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
		cout << "\n";
	 

	return 0;
}
