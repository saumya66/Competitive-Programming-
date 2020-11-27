
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 string s;
 cin>>s;
 ll c=0;
 for(ll i=0;i<s.length();i++)
 {
 	if(s[i]=='4' || s[i]=='7')
 	{
 		++c;

 	}
 }  
 string ss= to_string(c);
 for(ll i=0;i<ss.length();i++)
 {
 	if(ss[i]=='4' || ss[i]=='7')continue;
 	else {
 		cout<<"NO";
 		return;
 	}
 }
 cout<<"YES";


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
