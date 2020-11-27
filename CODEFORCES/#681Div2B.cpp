
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll a, b;
	cin>>a>>b;

  string s;
  cin>>s;
 
  ll l= s.length();
 
  //  for(ll i=0;i<l; )
  // {
  // 	if(s[i]=='1')
  // 	{
  // 		while(s[i]=='1')
  // 		{
  // 		i++;

	 //  	}
	   
  //       c++;
  // 	}
  // 	else {
  // 	++i;
  // 	}
  	
  // }
 
  ll st=-1,e=-1;
  for(ll i=0;i<l;i++)
  {
  	if(s[i]=='1')
  	{
  		 st=i;break;
  	} 

  }
   for(ll i=l-1;i>=0;i--)
  {
  	if(s[i]=='1')
  	{
  		 e=i;break;
  	} 

  }
  if(st==e && st==-1){
  	cout<<0;return;
  }
  ll ans=a;
  for(ll i=st;i<=e;i++)
  {
  	ll cnt=0;
  	while(s[i]=='0')
  	{
  		i++;
  		cnt++;
  	}

  	// ans+= min(a,b*cnt);
   	cout<<a<<" "<<b*cnt<<" "<<ans<<endl;
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
	ll t;
	cin >> t;
	while (t-- > 0)
	{
		solve();
		cout << "\n";
	}

	return 0;
}
