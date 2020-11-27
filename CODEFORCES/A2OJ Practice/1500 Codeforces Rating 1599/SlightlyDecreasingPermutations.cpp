
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
int n, k;
    scanf("%d %d", &n, &k);

    for(int i = 1; i <= k ; i++)
        printf("%d ", n - (i - 1));

    for(int i = 1; i + k <= n; i++)
        printf("%d ", i);

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
 