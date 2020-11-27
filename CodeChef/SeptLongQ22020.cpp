
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
  ll n;
  cin>>n;
  ll ar[n][n];
  std::vector<ll> v;
  ll f=0;
  for(ll i=0;i<n;i++)
  {
  	for(ll j=0; j<n;j++)
  	{
       cin>>ar[i][j];
       if(i!=0 && j!=0)
       	{ 
       		if(ar[i][j]!=ar[i][j-1]+1)f=-1;

       	}
       	else if(i>0 && j==0)
       	{
       		if(ar[i][j]!= ar[i-1][n-1]+1)f=-1;
       	}

  	}
  }
  if(f==0)
  	cout<<"0";
  else 
  {
    ll c=0;
    for(ll i=n-1;i>=0;--i)
    {
      if(ar[0][i]!=i+1)
      {
        ++c;

        for(ll j=0;j<=i;j++)
            {
              for(ll k=0;k<=i;k++)
              {
                swap(ar[j][k],ar[k][j]);
              }
            }
      }
    }
    cout<<c;

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
