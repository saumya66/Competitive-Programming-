
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{

 ll n,k;
 cin>>n>>k;
 std::vector<ll> v(n);
 

 for(ll &x: v)
 {
    cin>>x;
   
      

 }
 ll s=0;
 if(k%2==0)
 {	for(ll x:v)
  	{
  		s+=x;
  	}

      }
      else {
      	for(ll i=1;i<n;i++)
      	{
      		s=s+v[i];
      	}
      	cout<<s-v[0];
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


