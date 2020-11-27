
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll  n;
 cin>>n;

 std::vector<char> v;
 string s;
 cin>>s;
ll c=0;
 for (ll i = 1; i < n; ++i)
 {
 	 
 	 if(s[i]==s[i-1])++c;
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
	 

	return 0;
}
