
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
  string a, b,an,bn;
  cin>>a>>b;
  for(ll i=0;i<a.length();i++)
  {
  	if(a[i]!='0')
  		an+=a[i];

  }
   for(ll i=0;i<b.length();i++)
  {
  	if(b[i]!='0')
  		bn+=b[i];
  	
  }
  int  s1=stoi(a)+stoi(b) ;
 
  string s1s=to_string(s1);
  string s1n;
    for(ll i=0;i<s1s.length();i++)
  {
  	if(s1s[i]!='0')
  		s1n+= s1s[i];
  	
  }
  int s3=stoi(s1n);
  int s2=stoi(an)+ stoi(bn);
 
  if(s3==s2)cout<<"YES";
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
