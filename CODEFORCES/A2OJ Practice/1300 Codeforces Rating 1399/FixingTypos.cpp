
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 string s;
 cin>>s;
 ll l= s.length();
 ll f=0;
 
 for(ll i=0;i<l;i++)
 {
   while(i+2<=s.size()-1 && s[i]==s[i+1]&& s[i]==s[i+2])
        s.erase(i,1);
        while(i+3<=s.size()-1 && s[i]==s[i+1] &&s[i+2]==s[i+3])
            s.erase(i+3,1);
 
 }
 cout<< s;


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
 