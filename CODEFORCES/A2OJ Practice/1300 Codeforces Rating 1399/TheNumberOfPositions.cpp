
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
  ll n,f,b;
  cin>>n >>f>>b;

  cout << n-max(f+1, n-b)+1;


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
	 

	return 0;
}
