#include<iostream>
using namespace std;
int n,k,d[3010],ans=0,a,b;
int main()
{cin>>n>>k;
for(int i=0;i<n;i++){cin>>a>>b;d[a]=d[a]+b;}
for(int i=1;i<3005;i++){ans=ans+min(d[i],k);d[i]=d[i]-min(d[i],k);d[i+1]=d[i+1]+min(d[i],k);}
cout<<ans;}