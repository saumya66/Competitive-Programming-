
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
  string  s1, s2;
  cin>>s1>>s2;
   transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
   transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

   if(s1.compare(s2)==0)cout<<"0";
   else
  if( lexicographical_compare(s1.begin(),s1.end(),s2.begin(), s2.end())) 
	{ 
          
          cout<<"-1";
	} 
	else
	{ 
		cout<<"1";
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
