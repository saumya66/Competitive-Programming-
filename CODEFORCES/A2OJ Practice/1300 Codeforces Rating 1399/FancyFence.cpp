
#include<bits/stdc++.h>
using namespace std;
typedef  double ll;

void solve()
{
  ll a;
  cin>>a;
   ll i=3;
    ll an= 0;
  ll f= 0;
   while(an<=a)
   {
   	an= ((i-2)*180)/i;
   	//cout<<an<<" ";

   	if(an==a){
   		f=1;
   	//	cout<<"i="<<i;

   		break;
   	}
   	++i;
   }
   if(f==1)
   	cout<<"YES";
   else cout<<"NO";


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
