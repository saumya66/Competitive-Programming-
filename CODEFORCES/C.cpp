
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n;
 cin>>n;
 string a, b;
 cin>>a>>b;ll c=0;
 if(a[0]!= b[0])++c;
 if(a[n-1]!= b[n-1])++c;
ll f=0;
 for(ll i=1;i<n-1 ;i++)
 {
 	if(f==0)
 	{
 		if(a[i]!= b[i])
      	{
 		++c;
 		f=1;

 	    }
     	else{
 	   	f=0;
 	   	continue;
 	     }
 	} 
 	else {
 		if(a[i]!=b[i])
 		{
 			f=0;
 			continue;

 		}else {
 			f=1;
 			++c;
 		}
 	}
 	
 }
 cout<<c;


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
