
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n;
 cin>>n;
 ll s1=0,s2=0;
 for(ll i=0;i<n;i++)
 {
 	ll a,b;
 	cin>>a>>b;

   if((s1+a)-s2<=500)
   {
   	cout<<"A";
   	s1+=a;
   }
   else if (s1-(s2+b)<=500)
   {
   	cout<<"G";
   	s2+=b;
   }
   else {
   	cout<<"-1";
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
	 
		solve();
		cout << "\n";
	 

	return 0;
}
