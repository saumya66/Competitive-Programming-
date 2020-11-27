
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

ll sum(ll x)
{
	ll s=0;
	while(x>0)
	{
		ll r= x%10;
		s+=r;
		x=x/10;
	}
	return s;

}

void solve()
{
	ll x;
	cin>>x;
	ll os= sum(x);
	//cout<<os<<endl;
for(ll y=11;y<1e9;y++)
{
	if(sum(y*x)== os){
		cout<<y;
	return;
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
