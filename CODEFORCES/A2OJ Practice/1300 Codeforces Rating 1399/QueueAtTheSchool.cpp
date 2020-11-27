
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
  ll n,t;
  cin>>n>>t;
  string s;
  cin>>s;
    string ans;
  for(ll i=0;i<t;i++)
  for(ll i=0;i<n-1;i++)
  {
  	if(s[i]=='B' && s[i+1]=='G' )
  	{

  		swap(s[i],s[i+1]);
  		++i;
  	}
  }
  cout<<s;

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
