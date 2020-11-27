
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n,k;
 cin>>n>>k;
 string s;
 cin>>s;
 std::vector<ll> v;
 ll f=0,c=0,one=0,a=0,b=0;
  
 
 for(ll i=0;i<s.length();i++)
 { 
 	if(s[i]=='1')++one;
    
 	if(s[i]=='1' && f==0)
 	{
 		f=1;

 	}
 	else  if(f==1 && s[i]=='0')
 	{
 		++c;
 		 
 	}
 	 else  if(f==1 && s[i]=='1')
 	{
 		v.push_back(c);
 		f=0;
 		c=0;
 	}
 }

 
 ll i=0,j=n-1;
 while(i<=n-1 && s[i]!='1')
 {
 	++a;
     ++i;
 }

 while(j>=0 && s[j]!='1')
 {
 	++b;
 	--j;
 }
   //cout<<a<<" "<<b;
 //for(ll x: v)cout<<x<<" ";
 	ll nu=n;
  sort(v.begin(), v.end(),greater<ll>());
  ll p=0;
  for(ll x: v)
  
  {
  	if(k>=2)
  	{
  	    if(x>a+b)
  	    {
  	        nu=nu-x;
          k=k-2;
  	    }
  	    else {
  	        nu= nu-(a+b);
  	        k=k-2;
  	        p=1;
  	    }
       
  	}
  }
  if(p==0)
  {
      if(k>0)
  	{
  		nu= nu-max(a,b);
  	 
  		 
  	}
  }
  
  
  //cout<<one<<endl;
  cout<<nu-one;
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
 