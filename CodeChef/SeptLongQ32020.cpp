 
 #include<bits/stdc++.h>
 using namespace std;
 typedef  long long ll;
 
 void solve()
 {
   ll n,z=0;
   cin>>n;
   std::vector<ll> s,v;
  for( ll i=0;i<n;i++)
  {
  	ll x;
  	cin>>x;
  	v.push_back(x);
  	s.push_back(x);
  	if(x!=0) z=-1;

  }
  if(z==0){
   	cout<<"1"<<" "<<"1"  ;
  	return ;
  }   
  
  ll b=1,w=1,c=1;
 std::vector<ll> p;                            
  for(ll i=0;i<n;i++)
  {
  	ll pos= i+v[i];

   p.push_back(pos);
   if(i!=0){
   	if(p[i]==p[i-1])++c;
   	else c=1;

        	w=max(w, c);
     }
   }
 //  for(ll x: p)cout<<x<<" ";
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
 