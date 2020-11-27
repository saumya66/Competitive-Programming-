
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll r, c;
 cin>>r>>c;
 char ar[r][c];
 for(ll i=0;i<r;i++)
 {
 	string s;

 	cin>>s;

 	for (ll j = 0; j < c; ++j)
 	{
 		 
           ar[i][j]=s[j] ;
         

         
 	}

 }
 ll ans=0;
 for(ll i=0;i<r;i++)
 {
 	ll f=0,c1=0;
     for (ll j = 0; j < c; ++j)
 	{
 	 
          if(ar[i][j]=='.')++c1;
          else if(ar[i][j]=='S'){
          	f=-1;
          	c1 =0;break;
          }
         
 	}
 	ans+=c1;
 	if(f==0)
 	{
     for (ll j = 0; j < c; ++j)
 	{
 	 
     ar[i][j]='*';
 	}

 	}
    
 }
 

  for(ll i=0;i<c;i++)
 {
 	 ll c2=0;
     for (ll j = 0; j < r; ++j)
 	{
 	 
          if(ar[j][i]=='.' )++c2;
          else if(ar[j][i]=='S'){
           
          	c2 =0;break;
          }
         
 	}
 	ans+=c2;
  
    
 }
 cout<<ans;

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
