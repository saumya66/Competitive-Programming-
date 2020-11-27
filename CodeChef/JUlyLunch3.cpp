
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll dec(string a )
{
	string num = a;
	ll dec_value = 0;

	// Initializing base value to 1, i.e 2^0
	ll base = 1;

	ll len = num.length();
	for (ll i = len - 1; i >= 0; i--) {
		if (num[i] == '1')
			dec_value += base;
		base = base * 2;
	}
	return dec_value;


}


ll binZ(ll n1, ll n2)
{
	//finding the binary form of the number and
	//coneverting it to string.
	string s1 = bitset<64> (n1).to_string();

	//Finding the first occurance of "1"
	//to strip off the leading zeroes.
	const auto loc1 = s1.find('1');
	string st1, st2;
	if (loc1 != string::npos)
		st1 = s1.substr(loc1);

	string s2 = bitset<64> (n2).to_string();
	const auto loc2 = s2.find('1');
	if (loc2 != string::npos)
		st2 = s2.substr(loc2);

	string sb1 = st1 + st2;
	string sb2 = st2 + st1;

	ll a = dec(sb1);
	ll b = dec(sb2);


	return a - b;

}

void solve()
{
	ll n;
	cin >> n;
	ll ar[n];
	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];

	}
	ll ma = 0;

	ll c = 0;
	for (ll i = 0; i < n - 1; i++)
	{
		c = 0;
		for (ll j = i + 1; j < n; j++)

		{
			c = binZ(ar[i], ar[j]);
			ma = max(ma , c)
		}

	}
	cout << ma;


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
