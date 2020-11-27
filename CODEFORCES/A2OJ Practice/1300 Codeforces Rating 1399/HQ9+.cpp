
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
  string s;
  cin>>s;
  ll f=0;
  for(ll i=0;i<s.length();i++)
  {
  	if(s[i]=='H' ||s[i]=='Q' || s[i]=='9'){cout<<"YES";f=-1;
  	 break;}

  }
  if(f==0)cout<<"NO";
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
