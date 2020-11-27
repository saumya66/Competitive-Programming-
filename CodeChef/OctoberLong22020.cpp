
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 ll n,k,x,m;
 cin>>n>>k>>x>>m;
 
 if(m==x){cout<<"YES";return;}
  else if(k==0){cout<<"NO";return;}
 
 if(k==1){cout<<"YES";return;}
 ll c=0;

 if(n%k==1)
 {
    cout<<"YES";
    return;
 }
 else{
ll st= x;

    for(ll i=0;i<n;i++)
    {
         if((x+k)%n ==m){
            cout<<"YES";
            return;

         }
         else{
            x=(x+k)%n;
         }
    }
    cout<<"NO";
 }

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

#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 
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
