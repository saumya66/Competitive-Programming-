
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	/*
	 #ifndef ONLINE_JUDGE
	 freopen("input.txt", "r", stdin);
	 freopen("output.txt", "w", stdout);
	*/
	int r, c;
	cin >> r >> c;
	vector<string> adj ;
	for (int i = 0; i < r; i++) {
		string s;
		cin >> s;
		adj .push_back(s);

	}
	int f = 0;
	for (int i = 0; i < r; i++)
	{
		if (f == -1)break;

		for (int j = 0; j < c; j++)
		{
			if (adj[i][j] == 'S') {
				if (j != c - 1)
				{
					if (adj[i][j + 1] == 'W') {
						f = -1; break;
					}
					if (adj[i][j + 1] == '.')adj[i][j + 1] = 'D';

				}
				if (j > 0)
				{
					if (adj[i][j - 1] == 'W') {
						f = -1; break;
					}
					if (adj[i][j - 1] == '.')adj[i][j - 1] = 'D';

				}
				if (i != 0) {
					if (adj[i - 1][j ] == 'W') {
						f = -1; break;
					}
					if (adj[i - 1][j ] == '.')adj[i - 1][j ] = 'D';
				}
				if (i != r - 1) {
					if (adj[i + 1][j ] == 'W') {
						f = -1; break;
					}
					if (adj[i + 1][j ] == '.')adj[i + 1][j ] = 'D';
				}

			}
		}


	}
	if (f == -1)cout << "No";
	else {
		cout << "Yes" << "\n";

		for (string s : adj)
		{
			cout << s << endl;
		}
	}

	return 0;
}
