#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL n,k,a[200050],mx,ans,l,r,z;
vector<LL>v;
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>a[i],a[i]+=a[i-1];
 
    for(int i=k;i<=n;i++)v.push_back(a[i]-a[i-k]);
    	 
    for(int i=k,j=0;i<v.size();i++,j++)
    {
        if(v[j]>mx)mx=v[j],z=j;
        if(ans<mx+v[i])ans=mx+v[i],l=z,r=i;

    }
    cout<<l+1<<" "<<r+1;
}