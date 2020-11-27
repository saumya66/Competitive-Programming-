#include<bits/stdc++.h>
using namespace std;
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

		ll  a = 0, b = 0, c = 0;
		for (int i = 0; i < n; i++)
		{
			char a1, a2, a3;
			cin >> a1 >> a2 >> a3;
			if (a1 == 'R')
			{
				if (a2 == 'P')
				{
					--a ; ++b;
				}
				else if (a2 == 'S')
				{
					++a;
					--b;
				}


				if (a3 == 'P')
				{
					--a ; ++c;
				}
				else if (a3 == 'S')
				{
					++a ;
					--c;
				}

			}
			if (a2 == 'R')
			{
				if (a1 == 'P')
				{
					--b; ++a ;
				}
				else if (a1 == 'S')
				{
					++b;
					--a ;
				}


				if (a3 == 'P')
				{
					--b; ++c;
				}
				else if (a3 == 'S')
				{
					++b;
					--c;
				}

			}
		}
		cout << a  << " " << b << " " << c << endl;

	}




}