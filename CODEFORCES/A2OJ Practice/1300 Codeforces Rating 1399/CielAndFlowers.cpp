
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll r,b,g;
 cin>> r>>b>>g;
ll m=1e9;
 m= min(r,min(b,g)); 
 
r-=m; b-=m; g-=m; 
if(r%3+b%3+g%3==4 && m)++m;
 
m+=r/3; 
m+= b/3;

 m+=g/3; 
cout<<m;
 
 

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
 