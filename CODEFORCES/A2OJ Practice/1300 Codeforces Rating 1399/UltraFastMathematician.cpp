
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 string a,b;
 cin >>a>>b;
 
 
 string ans ;

 for (ll i = 0; i <a.length(); ++i)
 {
 	if(a[i]==b[i])ans =ans+ '0';
 	else ans= ans+'1';
 }
 cout<< ans ;  

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
