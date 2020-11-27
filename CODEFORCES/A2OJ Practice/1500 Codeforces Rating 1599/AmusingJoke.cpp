
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 string n, a,s;
 cin>>n>>a>>s;
 transform(n.begin(), n.end(), n.begin(), ::tolower); 
 transform(a.begin(), a.end(), a.begin(), ::tolower); 
 transform(s.begin(), s.end(), s.begin(), ::tolower); 
 ll ar1[27]={0};
 ll ar2[27]={0} ;
 for(ll i=0;i<s.length();i++)
 {
 	ar2[s[i]-'a']++; 
 }
for(ll i=0;i<n.length();i++)
 {
 	ar1[n[i]-'a']++; 
 }
 for(ll i=0;i<a.length();i++)
 {
 	ar1[a[i]-'a']++; 
 }
 for(ll i=0;i<27;i++)
 {
  	if(ar1[i]!=ar2[i])
 	{
 		cout<<"NO";return;
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
 