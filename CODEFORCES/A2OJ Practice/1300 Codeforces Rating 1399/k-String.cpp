
#include<bits/stdc++.h>
using namespace std;
typedef  int ll;
  ll ar[30];
void solve()
{
  ll k;
  cin>>k;
  string s;
  cin>>s;

 
  for (ll i = 0; i < s.length(); ++i)
  {
    ar[s[i]-'a' ]++;

  }
 
  for(ll i=0;i<26;i++)
  {
  	if(ar[i]%k!=0){
  		cout<<"-1";
  		return ;

  	}

  }
  string a;

  for (ll i = 0; i < 26; ++i)
  {
  	for(ll j=0;j<ar[i]/k;j++)

  	{
  		a+=(char )(i+'a');

  	}
  }
  for(ll i=0;i<k;i++)
  {
  	cout<<a;

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
		cout << "\n";
	 
	return 0;
}

 