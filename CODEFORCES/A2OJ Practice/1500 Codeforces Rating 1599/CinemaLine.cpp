
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n;
 cin>>n;
 ll t=0, f=0;
 
 for(ll i=0;i<n;i++)
 {
 	ll x;cin>>x;
 	if(i==0 )
 	{
 		if(x==50 || x==100)
 		   { cout<<"NO";
 		    		       return;}
 		    		       	else ++t;

 	}
 
 	if (i>0)
 	{
 		if(x==25)++t;
 		else if(x==50)
 		{
 			if(t>0)
 			{
 				--t;
 				++f;
 			}
 			else {
 				cout<<"NO";return;
 			}
 		}
 		else if(x==100)
 		{
 			if(t>0 && f>0){
 				--t;--f;
 			}
 			else if(t>2){
 				t=t-3;
 			}
 			else {
 				cout<<"NO";return;
 			}
 		}
 	}
 	 

 }
 cout<<"YES";

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
