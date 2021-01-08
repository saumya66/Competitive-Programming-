
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
    set<char> s = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    ll n;
    cin >> n;
    std::vector<char> v;
    ll f = 0;
    for (ll i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        if (s.count(a[0]))
        {
            s.erase(a[0]);

        }
        if (find(v.begin(), v.end(), a[0]) == v.end())
        {
            v.push_back(a[0]);
        }
        else if (v[v.size() - 1] != a[0])
        {
            f = 1;
        }

    }
    if (f == 0)
    {
        for (char x : s) {
            cout << x;
        }
        for (char x : v)
        {
            cout << x;
        }

    }
    else cout << "Impossible";

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

