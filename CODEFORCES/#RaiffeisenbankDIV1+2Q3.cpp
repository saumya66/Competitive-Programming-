
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 string s;
 cin>>s;
 string s1;
 ll c=0;
 for(ll i=0;i<s.length();i++)
 {
 	if(s[i]=='A' && s[i+1]=='B' || s[i]=='B' && s[i+1]=='B')
 	{
 		c+=2;
 		i++;
 	}
 	else if(s1==""){
 		s1=s[i];
 	}
 	else {
 		string k= s1+s[i];
 		if(k=="AB" || k=="BB")
 	    {
 		 c+=2;
 	   
 	     }
 	     k="";
 	     s1="";
 	}
 	 

 }
 cout<<s.length()-c;
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
   