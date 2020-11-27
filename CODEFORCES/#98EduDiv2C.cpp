
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	string s;
	cin >> s;
	ll cc = 0, cs = 0, c = 0;
	for (ll i = 0; i < s.length(); i++)
	{
		if (s[i] == '(') {
			cc++; continue;
		}
		else if (s[i] == '[') {
			cs++; continue;
		}
		else if (s[i] == ')')
		{
			if (cc > 0)
			{
				--cc;
				++c;
				continue;
			}
		}
		else if (s[i] == ']')
		{
			if (cs > 0)
			{
				cs--;
				c++;
				continue;
			}
		}
	}
	cout << c;
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

