#include<bits/stdc++.h>
using namespace std;
#define ps(x,y)           fixed<<setprecision(y)<<x
typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t-- > 0)
	{
		int n;
		cin >> n;
		int ar[n];
		for (int i = 0; i < n; i++)
		{
			cin >> ar[i];
		}
		int sum = 0;
		for (int j = 0; j < n; j++)
		{
			sum = sum + ar[j];
		}
		if (sum % n == 0)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}





}