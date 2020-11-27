 
 #include<bits/stdc++.h>
 using namespace std;
 typedef  long long ll;
 
 void solve()
 {
  ll n;
  cin>>n;
   std::vector<ll> v(n);
   for(ll &x:v)cin>>x;
   	sort(v.begin(), v.end());
   ll m=0;
   for(ll i=0 ;i<n-1;i++)
   {
   	if(v[i]==v[i+1]){++c;m=max(c,m)}
   	else c=0;
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
 
