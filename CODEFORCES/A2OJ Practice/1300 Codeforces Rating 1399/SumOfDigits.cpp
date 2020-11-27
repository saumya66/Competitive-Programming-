
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	 string s;
	 cin>>s;
	 
	 ll sum=0,  c=0;
	 while(s.length()>1){
      for(ll i=0;i<s.length();i++)
      	sum+=(s[i]-'0');

       s=to_string(sum);
          sum=0;
            ++c;

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
