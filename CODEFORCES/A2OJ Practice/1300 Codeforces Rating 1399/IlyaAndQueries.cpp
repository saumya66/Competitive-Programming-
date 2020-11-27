#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
 ll arr[1000001]={0};


void solve(ll ar[])
{

 ll  l,r,ans=0;
 cin>>l>>r;
 --l,--r ;
 if(l==0)
 {
 	cout<<ar[r-1];
 }
 else {
 	  ans =ar[r-1]-ar[l-1];
 	if(ans<=0){
 		ans=0;
 	}
 	
    cout<<ans;
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
	ll t;
	string s;

	cin>>s;
	cin >> t;
	

	ll c=0;
	for(ll i=0;i<s.length()-1;i++)
	{
		if(s[i]==s[i+1])arr[i]=++c;
		else arr[i]=c;

	}
	arr[s.length()-1]= arr[s.length()-2];
	//for( ll i=0;i<s.length();i++)cout<<arr[i]<<" ";
	while (t-- > 0)
	{
		solve(arr);
		cout << "\n";
	}

	return 0;
}
	