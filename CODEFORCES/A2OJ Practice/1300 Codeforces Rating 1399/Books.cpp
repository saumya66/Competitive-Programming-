
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n;
 cin>>n;
 ll f;
 cin>>f;
 std::vector<ll> v(n+1);
 v[0]=0;
 for(ll i=1;i<=n;i++)cin>>v[i];
 ll s=0,m=0;

for(ll i=1,j=1;j<=n;j++)
{
	s+=v[j];
      if(s<=f)
      {
      	 
      	m=max(m, j-(i-1));
      }
      else {
      	s-=v[i];
      	++i;
      }
}
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
