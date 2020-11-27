#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll r,rb,rs,rc,r1,r2,r3;
int nb,ns,nc,pb,ps,pc;
string s;
bool ok(ll x)
{
    r1=max(x*rb-nb,0ll);
    r2=max(x*rs-ns,0ll);
    r3=max(x*rc-nc,0ll);
    return r1*pb+r2*ps+r3*pc<=r;
}
 
void binary_Search()
{
    ll lo=0,hi=1e13,mid;
    while(lo<hi)
    {
        mid=(lo+hi+1)>>1;
        (ok(mid))?lo=mid:hi=mid-1;
    }
    printf("%lld\n",lo);
}
int main()
{
    cin>>s;
    for(int i=0; s[i]; ++i)
        rb+=(s[i]=='B'),rs+=(s[i]=='S'),rc+=(s[i]=='C');
    scanf("%d%d%d%d%d%d%lld",&nb,&ns,&nc,&pb,&ps,&pc,&r);
    binary_Search();
    return 0;
}