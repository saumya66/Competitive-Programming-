
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
  ll n;
  cin>>n;
  std::map<ll, ll> mp;
  std::vector<ll> v(n);
  for(ll &x: v)
  {
  	cin>>x;
  	if(x==5 || x==7 ){
  		cout<<"-1";
  		return;
  	}
  	else if(x==1)mp[1]++;
  	else if(x==2)mp[2]++;
  	else if(x==3)mp[3]++;
  	else if(x==4)mp[4]++;
  	else if(x==6)mp[6]++;

     

  }
  ll si= n/3;
 std::vector<string> an;
  
  for(ll i=0;i<n/3;i++)
  {
  	 if(mp[1]==si)
  	 {

  	 	if(mp[2]>0)
  	 	{
          if(mp[4]>0)
          {
          an.push_back("1 2 4");
          	mp[1]--;
          	mp[2]--;
          	mp[4]--;
          }
          else if(mp[6]>0)
          {
          an.push_back("1 2 6");
          	 	 mp[1]--;
          	     mp[2]--;
          	 	mp[6]--;
          }
          else {
          	 cout<<"-1";
          	 return;
          }

  	 	}
  	 	else if(mp[3]>0)
  	 	{
           if(mp[6]>0)
          {
          an.push_back("1 3 6");
          	   mp[1]--;
          	    mp[3]--;
          	 	mp[6]--;
          }
          else {
  	 		cout<<"-1";
          	 return;
  	 	    }
  	 	} 
  	 	else {
  	 		cout<<"-1";
          	 return;
  	 	}

        --si;
  	 }
  	 else{ cout<<"-1";return;}


  }
  for (string x: an)
  {
  	cout<<x<<endl;
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
