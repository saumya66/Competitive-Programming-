
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
	ll n, m;
	cin >> n >> m;
	std::vector<ll> jhn(n), jck(m) ;
	ll sjhn = 0, sjck = 0;
	for (ll & x : jhn)
	{
		cin >> x;
		sjhn += x;
	}

	for (ll &x : jck)
	{
		cin >> x;
		sjck += x;
	}
	sort(jck.begin(), jck.end());
	sort(jhn.begin(), jhn.end());
	ll i = 0, j = m - 1;
	ll c = 0;
	while (sjhn <= sjck && j >= 0 && i < n)
	{
		sjhn -= jhn[i];
		sjhn += jck[j];
		sjck -= jck[j];
		sjck += jhn[i];
		--j;
		++i;
		++c;
	}
	if (sjhn  > sjck)cout << c;
	else cout << "-1";
	//cout << sjhn << " " << sjck;


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
