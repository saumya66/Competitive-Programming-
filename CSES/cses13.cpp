
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	vector<string> v;
	do
	{
		v.push_back(s);

	} while (next_permutation(s.begin(), s.end()));
	cout << v.size() << endl;
	for (string x : v)
	{
		cout << x << endl;
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
