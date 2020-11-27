
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 string s1,s2;
 cin>>s1>>s2;
 if(s1.length()!=s2.length())
 {
 	cout<<"NO";return;
 }

 ll f1=0,f2=0;
 for(ll i=0;i<s1.length();i++)
 	{
 		if(s1[i]=='1')f1=1;
 	}
 	for(ll i=0;i<s1.length();i++)
 	{
          if(s2[i]=='1')f2=1;
 	} 
 	if(f1!=f2)cout<<"NO";
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
