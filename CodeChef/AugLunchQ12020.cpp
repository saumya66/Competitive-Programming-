
#include<bits/stdc++.h>
using namespace std;
typedef  int ll;

void solve()
{
	 ll n ;
	 cin>>n;

	 std::vector<ll> v;
	 for(ll i=0;i<n;i++)
	 {
	 	ll t;
	 	cin >>t;
	 	v.push_back(t);

	 }
	 map<ll ,ll> f1,f2;
	 for(int i=0;i<n;i++)
	 {
	 	f1[v[i]]++;

	 }
	 ll fr=0;
	 map <ll,ll>:: iterator it,it1,it2 ;
	 for(it=f1.begin();it!=f1.end();it++ )
	 { 
	      f2[it->second]++;


	 }
	  for(it2=f2.begin();it2!=f2.end();it2++ )
	 { 
	     fr=max(fr,it2->second );


	 }
	
	 ll ans =1e9;
	 
 

	 for(  it1 = f2.begin();it1!= f2.end();it1++)
	 {
        
          if(it1->second == fr)
         {
         	ans = min(ans , it1->first);
         }
          
	 }
	 cout<<ans  ;



	 

	  




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
