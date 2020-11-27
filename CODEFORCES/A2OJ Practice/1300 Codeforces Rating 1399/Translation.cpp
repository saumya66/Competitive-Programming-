
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 string s1,s2;
 cin>>s1>>s2;
 ll f=0;
 for(ll i=s1.length()-1,j=0;i>=0;--i)
 {
 	if(s1[i]!=s2[j]){
 		f=-1;
 		break;
 	}
 	++j;
 }
 if(f==-1)
 	cout<<"NO";
 else cout<<"YES";

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
