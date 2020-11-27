
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	 string s;
	 cin>>s;
	 for(ll i=0;i<s.length() ;i++)
	 {  	if(s.substr(i, 3)=="WUB")
	 	{ 
	 		 cout<<" ";
	 		i=i+2;

	 	}
	 	else cout<<s[i];

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
	 
	return 0;
}
