
#include<bits/stdc++.h>
using namespace std;
typedef  double ll;

void solve()
{
  ll n,z=0;
   cin>>n;
   std::vector<ll>  v;
  for( ll i=0;i<n;i++)
  {
  	ll x;
  	cin>>x;
  	v.push_back(x);
   
  
  }
  
  	ll w=0, b=1,c=0 ;
  set<double> s;
  double p=0.0;
   for(double j=0.1;j<=1.0;j+=0.1)
   {
      

    c=1;
   	  for (double i = 1; i <= n; ++i)
      {
         
     	double p=i+(v[i-1]*j);
          
   
     	if(s.count(p)){
           ++c;

          }       
     	 s.insert(p);
 
 

        }
      w=max(w,c);
       
          s.clear();
   }

     if(w==n)b=n;
     cout<<b<<" "<<w;
  

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
