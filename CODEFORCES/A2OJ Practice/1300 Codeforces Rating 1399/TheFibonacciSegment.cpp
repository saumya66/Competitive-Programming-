
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n;
 cin>>n;
 std::vector<ll> v(n);
 for(ll &x: v)
 	cin>>x;
 ll m=2;
 for(ll i=0, j=0 ; i<n;i++)
 {
 	if(i==0 )
 	{
 		m=1;
 	}
 	else if(i==1)
 	{
 		m=2;
 	}
 	else {
 		if(v[i]== v[i-1]+v[i-2])
 		{
         m= max(m, i-j+1);
         
 		}
 		else {
 			j=i-1;
 		}
 		 
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
