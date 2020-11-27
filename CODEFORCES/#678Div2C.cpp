
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
ll M=1000000007;
//const int N =5000;
// #define NCR
// #define PRIME	M
// int pw(int a,int p=M-2,int MOD=M){
// 	int result = 1;
// 	while (p > 0) {
// 		if (p & 1)
// 			result = a * result % MOD;
// 		a = a * a % MOD;
// 		p >>= 1;
// 	}
// 	return result;
// }
// int fact[N],invfact[N];
// void init(){
// 	int p=PRIME;
// 	fact[0]=1;
// 	int i;
// 	for(i=1;i<N;i++){
// 		fact[i]=i*fact[i-1]%p;
// 	}
// 	i--;
// 	invfact[i]=pw(fact[i],p-2,p);
// 	for(i--;i>=0;i--){
// 		invfact[i]=invfact[i+1]*(i+1)%p;
// 	}
// }
// int ncr(int n,int r){
// 	if(r > n || n < 0 || r < 0)return 0;
// 	return fact[n]*invfact[r]%PRIME*invfact[n-r]%PRIME;
// }

ll fact(ll x)
{
	if(x==0)return 1;
	else return x*fact(x-1);


}
void solve()
{
	ll n, x,pos;
	cin>>n>>x>>pos;
	ll sm= x-1;
	ll gr= n-x;
	ll  sp = n-1;
	ll sum=1;
	ll l= 0;
	ll r=n;
	ll mid=0;
	while(l< r)
	{
		  mid=(l+r)/2;
		if(mid==pos )
		{
			l= mid+1;
			

		}
		else if(mid>pos)
		{
        	r= mid ;
        	sum= ( sum * gr  )%M;
        	gr--;
        	sp--;



		}
		else {
			l= mid+1;
			sum= (sum  * sm )%M;

			sm--;
			sp--;

		}
	}	 
	if(l>0 && l-1==pos )
	{
		sum= ((fact(sp)%M)*(sum%M))%M; 
		 
	}
	else sum=0;
	cout<<sum;

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
