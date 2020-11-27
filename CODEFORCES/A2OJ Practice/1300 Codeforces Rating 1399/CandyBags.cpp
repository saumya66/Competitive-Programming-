
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
  ll a;
  cin>>a;
  ll n=a*a;
  ll s= n*(n+1)/2;
  ll d= s/n;
  ll s1=0, s2=0;
  ll i1=1,i2=n ;
  for(ll i=0;i<a;i++)
  {
  	for(ll j=0;j<a;j++)
  	{
  		if(j%2==0){
  			cout<<i1<<" ";
  			i1++;
  			}
  			else 
  			{
  				cout<< i2<<" ";
  			      --i2;


  			}

  	}
  	cout<<endl;
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
