
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll n;
cin>>n;

 string s;
 cin>>s;

 ll c=0;
 for(ll i=0;i<n;i++)
 {
 	ll f,b;
 	f= (i+1)%n;
 	b= (i+n-1)%n;

    if(s[i]=='>')
    {
    	if(s[f]=='<')++c;

    }
    else if(s[i]=='<'){
    	if(s[b]=='>')++c;

    }
    else if(s[i]=='-')
    {
    	if(s[f]=='<' && s[b]=='>')++c;
    	++i;

    }
 }
 cout<<n-c;
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
