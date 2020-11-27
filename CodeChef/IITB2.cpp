
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n;cin>>n;
 std::vector<ll> v(n);
 for(ll &x: v)cin>>x;
 	ll pr=0,pl=0;
 	for(ll i=1,j=n ;i<=n; )
 		{
             pl =i+v[i-1];
             i=pl;
              
             pr= j-v[j-1];
             j=pr;
             
            if(pr==pl){
 				cout<<"Yes";
 				return;
 			}
 	         else	if(pr<pl){
 				cout<<"No";
 				return;
 			} 
 			else if(pr<0 || pl >n )
 			{
 				cout<<"No";return;
 			}
 			
        }
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
	ll t;
	cin >> t;
	while (t-- > 0)
	{
		solve();
		cout << "\n";
	}

	return 0;
}

