
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	ll n;
	cin >> n ;
	ll q1, q2;
	cin >> q1 >> q2;
	ll a1, a2, b2, b1;
	cin >> a1 >> a2 >> b1 >> b2;
	char x1, y1, x2, y2;

	if (a1 > q1)x1 = 'b';
	else x1 = 's';

	if (a2 > q2)y1 = 'b';
	else y1 = 's';

	if (b1 > q1)x2 = 'b';
	else x2 = 's';

	if (b2 > q2)y2 = 'b';
	else y2 = 's';

	if (x1 == x2 && y1 == y2)cout << "YES";
	else cout << "NO";



}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
// /*
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
// */

	solve();
	cout << "\n";


	return 0;
}
