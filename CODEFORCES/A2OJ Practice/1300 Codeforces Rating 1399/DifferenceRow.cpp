
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 
  int n,i;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++)
  cin>>a[i];
  sort(a,a+n);
  swap(a[0],a[n-1]);
  for(i=0;i<n;i++)
  cout<<a[i]<<" ";
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
