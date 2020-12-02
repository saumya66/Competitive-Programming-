
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
std::vector<ll> v ;

void solve()
{
	int x;
	cin >> x;
	int k = 1;
	int sum = 0;
	int steps = 0;
	while (sum < x) {
		sum += k;
		++k;
		steps++;


	}

	if (sum == x )cout << steps << endl;
	else {
		if (sum - x == 1)cout << steps + 1;
		else cout << steps;
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
	cin >> t;

	while (t-- > 0)
	{
		//v.clear();
		solve();
		cout << "\n";
	}

	return 0;
}
