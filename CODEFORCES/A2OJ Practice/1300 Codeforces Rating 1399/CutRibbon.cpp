
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n;
 cin>>n;
 ll a,b,c;
 cin>>a>>b>>c;
 
 ll m=0;
  for(ll i=0;i<=4000;i++)
  {
    for(ll j=0;j<=4000;j++)
    {
       ll t= n-(i*a)-(j*b);
          if(t>=0 && t%c==0)m=max(m, i+j+(t/c));
         
       
    }
    
  }
  cout<<m;
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
