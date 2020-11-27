
#include<bits/stdc++.h>
using namespace std;                             
typedef  long long ll;

void solve()
{                 
 ll n;
 cin>>n;
 string s ;
  while(1)
 {
 	s=s+"47";
 	sort(s.begin(), s.end());
 	do{
 		if(stoll(s)>=n){

 			cout<<stoll(s);return;
 		}
 	}while(next_permutation(s.begin(), s.end()));
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
