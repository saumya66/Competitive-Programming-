
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 string s;
  cin>>s;
  for(ll i=0;i<s.length(); )
  {
 
  	 if(s.substr(i,3)=="144")
  		i+=3;

  	else if(s.substr(i,2)=="14")
  		i+=2;
     else	if(s.substr(i,1)=="1")
  		++i;
  	else{
  		cout<<"NO";
  		return;
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
