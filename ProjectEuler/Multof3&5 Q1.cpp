#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	ll sum = 0;
	for (int i = 1; i < 1000; ++i)
	{

		if (i % 3 == 0)sum += i;
		else if (i % 5 == 0)sum += i;
	}
	cout << sum;





	return 0;
}
