 
 #include<bits/stdc++.h>
 using namespace std;
 typedef  long long ll;
 
 void solve()
 {
   ll n=5;
   ll r, c;
   ll ar[5][5];
   for (int i = 0; i < n; ++i)
   {
   	 for (int j = 0; j < n; ++j)
   	 {
   	 	cin>>ar[i][j];
   	 	if(ar[i][j]==1){
   	 		r=i;
   	 		c=j;
   	 	}
   	 }
   }
   ll ans= abs(2-r)+ abs(2-c);
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
 		cout << "\n";
 	 
 	return 0;
 }
 