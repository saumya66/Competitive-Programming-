
#include<bits/stdc++.h>
using namespace std;
typedef  int ll;
const ll MOD=1000000007;
const ll N= 1e7+2;

ll dp[2][N];
 
void solve()
{
	 ll n;
	 cin>>n;
   dp[1][0]=1;
   for (int steps = 1; steps < N; ++steps)
   {
      dp[1][steps]= (3LL*dp[0][steps-1])%MOD;
      dp[0][steps] =( (2LL*dp[0][steps-1])+dp[1][steps-1])%MOD;
   }
 cout<<dp[1][n];
     
      
  
 

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
		 
	 

	return 0;
}
