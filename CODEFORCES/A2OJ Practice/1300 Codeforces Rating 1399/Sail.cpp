
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll t;
 cin>>t;
 ll x,y, xl,yl;
 cin>>x>>y>>xl>>yl;
 string s;
 cin>>s;
ll c=0;
 for(ll i=0;i<t;i++)
 	{
 		if(x==xl && y==yl)
 			break;
 		if(s[i]=='S')
 		{
 			if(y>yl)
 			{
 				y=y-1;
 				 
 			}
 		}
 		else if(s[i]=='N')
 		{
 			if(y<yl)
 			{
 				y=y+1;
 				 
 			}
 		}
 		else if(s[i]=='E')
 		{
 			if(x<xl)
 			{
 				x+=1;
 				 
 			}
 		}
 		else if(s[i]=='W')
 		{
              if(x>xl)
              {
              	x=x-1;
              	              
               } 			
 		}
 		++c;
 	}
 	if(x==xl && y==yl)
 	{
 		cout<<c;
 	}
 	else cout<<"-1";
  

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
 