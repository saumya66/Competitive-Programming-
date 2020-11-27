#include <bits/stdc++.h>

using namespace std;

int main() {
	/*#ifdef _DEBUG
		freopen("input.txt", "r", stdin);
	 	freopen("output.txt", "w", stdout);
	#endif*/

	int t;
	cin >> t;
	while (t--) {
		int n;
		string s;
		cin >> n >> s;
		vector<int> a(n);
		vector<int> l0, l1;
		int subs = 0;
		for (int i = 0; i < n; i++) {
			subs = l0.size() + l1.size();
			if (s[i] == '0') {
				if (l1.empty()) {

					l0.push_back(subs);

				}
				else {
					subs = l1.back();
					l1.pop_back();
					l0.push_back(subs);
				}
			}
			else  if (s[i] == '1') {
				if (l0.empty()) {

					l1.push_back(subs);
				}
				else {
					subs = l0.back();
					l0.pop_back();
					l1.push_back(subs);
				}
			}
			a[i] = subs ;

		}

		cout << l0.size() + l1.size() << endl;
		for (int x : a)
			cout << x + 1 << " ";
		cout << endl;
	}

	return 0;
}