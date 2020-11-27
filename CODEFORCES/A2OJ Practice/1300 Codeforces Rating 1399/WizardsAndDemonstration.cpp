
#include<bits/stdc++.h>
using namespace std;
typedef  double  ll;

void solve()
{
   
   ll n , x, y;
   cin>>n>>x>>y;
    
   ll wreq=(y*n)/100;
   ll a=(int) wreq;

   if(wreq-a>0 && wreq-a<=0.9 )
   	wreq++;
   
     if(wreq< x)

   {
   	cout<<"0";
   }
   else 
   {
    int ans=(int )wreq-x;
     	cout<<ans;;
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
