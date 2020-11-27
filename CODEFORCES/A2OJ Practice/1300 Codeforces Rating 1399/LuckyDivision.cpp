
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n;
 cin >>n;
 string s;
 s= to_string(n);
 ll f=0;

 for(ll i=0;i<s.length();i++)
 {
 	if(s[i]!='4' || s[i]!='7'){
        f=-1;
        break;
 	}
 }
 if(f==0)cout<<"YES";
 	else
 	{
 		 if(n%4==0 || n%7==0 || n% 47==0 || n%74==0 || n%477==0 ||n%774==0 ||n%474==0 || n%447==0 || n%444==0 )
 		 {
 		 	cout<<"YES";
 		 	return;
 		 }
 		 else cout<<"NO";
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

