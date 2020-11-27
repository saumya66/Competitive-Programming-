
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll a, b;
 cin>>a>>b;
 ll  x1, y1, x2,y2;
 if(a>0 && b>0)
 {
 	x1= 0;
 	y1=a+b;
 	x2= a+b;
 	y2= 0;

 }
 else if(a< 0 && b>0)
 {
    x1= a-b;
 	y1=0;
 	x2= 0;
 	y2= abs(a)+b;

 }
 else if(a>0 && b< 0)
 {
    x1= 0;
 	y1=-a+b;
 	x2= a+abs(b);
 	y2= 0;
 }
 else if(a<0 && b<0)
 {
 	 x1= a+b;
 	y1=0;
 	x2=0;
 	y2=  a + b ;

 }
 cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2;


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
