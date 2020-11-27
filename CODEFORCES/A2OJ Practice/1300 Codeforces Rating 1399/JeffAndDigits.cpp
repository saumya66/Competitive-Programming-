
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
  ll n;
  cin>>n;
  std::vector<ll> v(n);
  ll cf=0,z=0,cz =0;;
  for(ll &x: v)
  	{cin>>x;
  		if(x==0)
  			z=-1;
  		if(x==5)++cf;
  		if(x==0)++cz;

  	}
  	if(cf<9 && z==-1)cout<<"0";
  	else if(  z==0)cout<<"-1";
  	else
  	{
  		ll f=0;
  		if(cf%9==0)f=cf;
  		else
  	        f= cf-(cf%9);
  	while( f-->0)
  	{
  		cout<<"5";

  	}
  	while(cz-->0)
  	{
  		cout<<"0";
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
 
		solve();
		cout << "\n";
 

	return 0;
}
