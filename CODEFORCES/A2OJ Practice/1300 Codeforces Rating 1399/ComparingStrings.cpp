
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void solve()
{
 string s1, s2;
 cin>>s1>>s2;
 if(s1== s2)
 {
 	cout<<"NO";
 	return;
 }
 else if(s1.length()!=s2.length()){
 	cout<<"NO";
 	return;
 }
 ll  p=0;
  for(ll i=0;i<s1.length();i++)
 {
 	if(s1[i]!=s2[i])
 	{
        ++p;
 	}
 }

 ll c=0;
 char w1,w2;
 if(p==2)
 {
 	for(ll i=0;i<s1.length();i++)
 {
  
 	if(c==0)
 	{
 	 if(s1[i]!=s2[i] )
 	 	 	{
 		w1=s1[i];
 		w2=s2[i];
 		++c;
 	  }

 	}
    else
 	{
  //  cout<<s1[i]<<" "<< s2[i]<<endl;
 	 if(s1[i]!= s2[i] ) 
    {  
    	 if(w2==s1[i] && w1==s2[i])
 	 	{
 		cout<<"YES";
 		return;
 	   }
 	   else {
 	   		cout<<"NO";
 	        return;
 	   }
     } 
     
 	}
 	
    }
}
 else {
 	cout<<"NO";
 	return;
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
 
		solve();
		cout << "\n";
	 

	return 0;
}
