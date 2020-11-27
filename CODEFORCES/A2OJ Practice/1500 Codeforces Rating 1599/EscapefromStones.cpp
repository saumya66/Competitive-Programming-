#include<iostream>
using namespace std;
int i;
string s;
main()
{
cin>>s;
for(i=0; i<s.size();i++)
{
if(s[i]=='r') 
cout<<i+1<<" ";
}
for(i=s.size()-1;i>=0;i--)
{
if(s[i]=='l') 
cout<<i+1<<" ";
}
}