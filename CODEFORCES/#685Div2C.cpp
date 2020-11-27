
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	int n, k;
	cin >> n >> k;
	string a, b;
	cin >> a >> b;

	std::vector<int> ar(26), br(26);
	for (char c : a)
		ar[c - 'a']++;
	for (char c : b)
		br[c - 'a']++;


	for (int i = 0; i <  26; ++i)
	{
		if (ar[i] < br[i])
		{
			cout << "No"; return;
		}
		int d = ar[i] - br[i];
		if (d % k)
		{
			cout << "No"; return;
		}
		ar[i] -= d;
		ar[i + 1] = ar[i + 1] + d;
	}
	cout << "Yes";

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
		solve();
		cout << "\n";
	}

	return 0;
}
