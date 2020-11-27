
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
  ll n ;
  cin>> n;
  std::vector<string> v(n);
  std::map<string , ll> m;
  for(string &x: v){
  	cin>>x;
      m[x]++;

  	}
  std::map<string, ll>:: iterator it;
  string ans ;ll ma=0;
  for(it = m.begin();it!=m.end();++it)
  {
     if(it->second  >ma )
     {
     	ans =it->first;
     	ma= it->second;
     }
  }
  cout<<ans;
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
