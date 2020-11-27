
#include<bits/stdc++.h>
using namespace std;


void solve()
{
	int n, pz, po, h, cz = 0, co = 0;
	cin >> n >> pz >> po >> h;
	string s;
	cin >> s;
	int sum = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '0')++cz;
		else ++co;
	}
	//cout << co << " " << po << " " << cz << " " << pz << endl;

	int a = 0;

	if (pz < po) {sum = ( h * co) + (co * pz) + (cz * pz);}
	else {sum = ( h * cz) + (cz * po) + (co * po);}
	//cout << (co * po) + (cz * pz) << endl;
	cout << min((co * po) + (cz * pz), sum);
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
	int t;
	cin >> t;
	while (t-- > 0)
	{
		solve();
		cout << "\n";
	}

	return 0;
}
