
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll x1,y1,y2,x2,x3,x4 , y3, y4,s=0;
 cin>>x1>>y1>>x2>>y2;
 
 if(x1==x2 && y1!=y2){
 	s=abs(y2-y1); 
 	x3= x2+s;
 	y3= y2;
    x4= x1+s;
 	y4= y1;
 
 }
 else if(y1==y2 && x1!=x2)
 {
 	s=abs(x2-x1);
 		 
 	y3= y2+s;
 	x3= x2;
    y4= y1+s;
 	x4= x1;
 }
 else if(abs(x2-x1) == abs(y2-y1))
 {
 cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
 return;

 }
 else{
 	cout<<"-1";
 	return;
 }
 cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
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
