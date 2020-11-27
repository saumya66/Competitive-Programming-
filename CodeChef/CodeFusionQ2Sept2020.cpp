
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n;
 cin>>n;
 std::vector<ll> v(n);
 for(ll &x: v)cin>>x;
 ll ar[n],s=0;
   for (ll i = 0; i < n; ++i)
   {
	s+=v[i];
	ar[i]=s;
   }
ll m=0, e=0,o=0;
  for(ll i=0,j=0;i<n;i++)
  {
	
	 	++j;
	 	if(v[j]!=v[i])
	 	{
	 		if(v[j]%2==0)++e;
            else ++o;
	 	}
       
      else if(v[j]==v[i])
      {

      	--e;--o;
           cout<<v[i]<<" "<<v[j]<<endl;
      	if(v[j]%2==0)
      	{
 
           // cout<<v[j]<<" "<<"e="<<e<<endl;
      		if(e%2==0)
      		{
      			m=max(m,ar[j-1]-ar[i] );
      		}
      	}
      	else{
      		if(o%2!=0)
      		{
      				m=max(m,ar[j-1]-ar[i] );
      		}
      	 
          }
     
        j=i;
        e=0, o=0;
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
	ll t;
	cin >> t;
	while (t-- > 0)
	{
		solve();
		cout << "\n";
	}

	return 0;
}
	