
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
  ll n;
  cin>>n;
  ll req =n-10;
  if(req==0)
  	cout<<"0";
  else if(req==1 || req==11)
  	cout<<"4";
  else if(req>=2 && req<= 9)
  	cout<<"4";
  else if(req==10)
  	cout<< "15";
  else cout<<"0";

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
