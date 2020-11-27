
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll a,b;
 cin>>a>>b;
 
 ll a1=0,a2=0,a3=0,b2=0,b3=0,b1=0;
 while(a%2==0){
 	a=a/2;
 	a1++;
 }
  while(a%3==0){
 	a=a/3;
 	a2++;
 }
  while(a%5==0){
 	a=a/5;
 	a3++;
 }
  while(b%2==0){
 	b=b/2;
 	b1++;
 }
  while(b%3==0){
 	b=b/3;
 	b2++;
 }
  while(b%5==0){
 	b=b/5;
 	b3++;
 }
 if(a!=b){
 	cout<<"-1";
 }
 else {
 	cout<<abs(a1-b1)+abs(a2-b2)+abs(a3-b3);
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
