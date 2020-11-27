
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 string s;
 string r= "hello";
 cin>>s;
 string a;

if(r.length()>s.length())
{
	cout <<"NO";
	return;
}
for(ll i=0;i<s.length();i++)
{
 if(a.length()==0 && s[i]=='h'){
 	a=a+"h";

 }
 else if(a.length()==1 && s[i]=='e' ){
    a+="e";

 }
 else if((a.length()==2 || a.length()==3) && s[i]=='l' )
 {
 	a+="l";
 }
 else if(a.length()==4 && s[i]=='o')
 {
 	a+="o";
 }
}
if(a==r)cout<<"YES";
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
	 
		solve();
		cout << "\n";
	 

	return 0;
}
