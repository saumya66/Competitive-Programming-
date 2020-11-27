
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
 ll n;
 cin>>n;
 std::vector<ll> v(n);
 for(ll &x: v)
 {
       cin >>x;
 } 
  ll rm=0 , lm=0  ;
  ll mx=  *max_element(v.begin(), v.end());
  ll mn= *min_element(v.begin(), v.end());
  if(v[0]==mx  && v[n-1]==mn)cout<<"0";
  else 
  {
  		ll rp=0;
  	if(v[0]==mx){
  		lm=0;
  	}
  	else {
  		for(ll i=0;i<n;i++)
  		{
  			if(v[i]==mx){
  				lm= i;

  				break;
  			}

  		}
  	}
  	if(v[n-1]==mn){
      rm=0; 
      rp=n-1;
  	}

  	else {
  	
  		for(ll  i=n-2;i>=0l;--i)
  		{
  			if(v[i]==mn  )
  			{
  			 
  				rm=n-i-1;
  				  rp=i;
  				break;
  			}
  		}
  	}


  	if(lm>=rp){
  		cout<< rm+lm-1;
  	}
  	else 
  		cout<< rm+lm;
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
