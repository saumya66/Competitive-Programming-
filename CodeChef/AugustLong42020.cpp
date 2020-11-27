
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	string s1;
	string s2;

	cin >> s1 >> s2;
//	ll ar[27];
	std::vector<ll>ar(27, 0) ;
	vector<ll>arr(27, 0);
	//ll arr[27];
//memset(ar, 0, sizeof(ar));
	//memset(arr, 0, sizeof(arr));
	for (ll i = 0; i < s1.length(); i++) {
		ar[s1[i] - 97]++;
	}
	for (ll i = 0; i < s2.length(); i++) {
		ar[s2[i] - 97]--;
	}
	for (ll i = 0; i < 26; ++i)
	{
		arr[i] = ar[i];
	}
	string t1, t2;

	for (ll i = 0; i <= (s2[0] - 97); i++) {
		while (ar[i] > 0) {
			t1 = t1 + (char)(i + 97);
			ar[i]--;
		}
	}
	t1 = t1 + s2;
	for (ll i = 0; i < 26; i++) {
		while (ar[i] > 0) {
			t1 = t1 + (char )(i + 97);
			ar[i]--;
		}
	}
	for (ll i = 0; i < (s2[0] - 97); i++) {
		while (arr[i] > 0) {
			t2 = t2 + (char)(i + 97);
			arr[i]--;
		}
	}
	t2 = t2 + s2;
	for (ll i = 0; i < 26; i++) {
		while (arr[i] > 0) {
			t2 = t2 + (char)(i + 97);
			arr[i]--;
		}
	}
//	cout << t1 << " " << t2;
	cout << min(t1, t2);




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
