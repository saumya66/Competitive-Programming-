
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
  ll n;
  cin>>n;
  //std::vector<pair<ll, ll>> v;
  ll c=1,ans=1;
ll lh=0,lm=0;
  for(ll i=0;i<n;i++)
  {
  	ll h, m;
  	cin>>h>>m;
     if(i!=0)
     {
     	if(h==lh && lm==m)
     	{
     		++c;
     	}
     	else c=1;
     	 
   
     	 
     }
       	   lh=h;lm=m;
      ans=max(ans, c); 
     }
  cout<<ans;
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

