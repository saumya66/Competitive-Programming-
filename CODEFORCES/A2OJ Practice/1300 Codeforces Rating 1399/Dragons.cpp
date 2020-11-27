
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll s,n;
 cin>>s>>n;
 std::vector<pair<ll,ll>> v;
 for (int i = 0; i < n; ++i)
 {
 	ll x,y;
 	cin>>x>>y;
 	v.push_back(make_pair(x,y));
 }
 sort(v.begin(), v.end());
 for(ll i=0;i<n;i++)
 {
    if(s>v[i].first)
    {
    	s+=v[i].second;
    }
    else 
    {

    	cout<<"NO";
    	return ;
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
 