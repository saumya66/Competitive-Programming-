 
 #include<bits/stdc++.h>
 using namespace std;
 typedef  int ll;
 
 void solve()
 {
    ll n;
    cin>>n;
    std::vector<ll> v(n),f;
    ll c=0;
    for(ll &a: v)
     {
    	cin>>a;
    	if(a==0)
    	{
    		++c;

    	}
    	else 
    	{
    		if(c>0)
               f.push_back(c);
                   
                   c=0;

    	}
       }
       if(v[n-1]==0)f.push_back(c);
      
           if(f.size()==0)
           {	cout<<"No";
                       return ;
           }
       sort(f.begin(), f.end(),greater<ll>());
       char ans= 'N';
       for (ll i = 0; i < f.size(); ++i)
       {
       	 // if(f[i]%2!=0	)
       	 // {
       	  //	if(ans=='N' )ans= 'N';
       	  //	else ans = 'T';
       	  //}
       	  
       	if(f[i]%2==0)
       	{ 
       	  	if(ans == 'N')
       	  		ans = 'T';
       	  	else
       	  		ans = 'N';
       	  }
       }
       if(ans == 'N')cout<<"Yes";
       else cout<<"No";

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
 