
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n;
 cin>>n;
 ll sx=0, sy=0, sz=0;
 for(ll i=0;i<n;i++)
 {
 	 ll x, y, z;
                  cin>>x>>y>>z;
                  sx=sx+ x;
                  sy=sy+y;
                  sz=sz+z;

 }
 if(sx==0 && sy==0 && sz==0)
 	cout<<"YES";
 else cout<< "NO";
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
