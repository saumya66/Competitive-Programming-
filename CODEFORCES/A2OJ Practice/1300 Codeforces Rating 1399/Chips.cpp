
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n,m;
 cin>>n>>m;
 ll s=(n*(n+1))/2;
 ll ans=0;
 
 if(m%s==0)cout<<"0";
 else 
 if(s<=m)
 {
  ll a=s;
  ll k=1;
  while(s<  m-a )
  {
    s=a*k;
   // cout<<k<<endl;
    ++k;
  }

   //cout<<s<<" ";
 	ll lt= m-s;
   //cout<<lt;
   for(ll i=1;i<=n;i++)
   {
     
      if(lt==i)
      {
      	lt=0;
      	break;
      }
      else if(i>lt){

      	break;

      }
       lt= lt- i;
        
        
   }
   cout<<lt;
        

 }
 else if(s>m)
 {
 	while(s>m)
 	{
 	     --n;
 		s=(n*(n+1))/2;
 	}
 	cout<<m-s;
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
