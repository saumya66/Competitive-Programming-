
#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;


int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int n;
	cin >> n;
	map <int ,  int>m;
	std::map<int, int> mp;
	std::vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		int a, ma = 0, mi = 10;
		cin >> a;
		while (a > 0)
		{
			int b = a % 10;
			ma = max(ma, b);
			mi = min(mi , b);
			a = a / 10;

		}
		int s = mi * 7 + ma * 11;
		string st = to_string(s);
		if (st.length() == 3) {
			st.erase(st.begin());
		}
		int x = stoi(st);
		m[x / 10] = m[x / 10] + 1;
		mp[x / 10] = 0;

		v.push_back(x);



	}
	int p = 0;
	for (int i = 0; i < v.size(); ++i) {
		if (m[v.at(i) / 10] > 1 && mp[v.at(i) / 10] <= 2)
		{
			int c = 1;
			for (int j = i + 1; j < v.size(); ++j)
			{

				if (v[i] / 10 == v[j] / 10)
				{
					if ((i + 1) % 2 == 0 && (j + 1) % 2 == 0) {
						++c;
						cout << "even" << v[j] << endl;

					}
					else if ((i + 1) % 2 != 0 && (j + 1) % 2 != 0)
					{
						++c;
						cout << "odd";
					}


				}
			}
			p = p + c / 2;
			mp[v.at(i)] = p;

		}
	}
	cout << p;
	cout << "\n";


	return 0;
}
