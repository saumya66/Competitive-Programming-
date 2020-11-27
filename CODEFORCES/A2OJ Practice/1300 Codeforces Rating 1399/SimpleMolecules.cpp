
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll a, b,c;
 cin>>a>>b>>c;
 ll x=0,y=0,z=0;
 for(x=0;x<=a && x<=b;x++)
 {
 	if(a-x+(b-x)==c){

 		cout<<x<<" "<< b-x<<" "<<a-x;
 		return;
 	}

 }
 cout<<"IMPOSSIBLE";
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
