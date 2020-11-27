#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
int t;
cin>>t;
for(int mi=0;mi<t;mi++){
int n;
cin>>n;
int arr[n];
int t1=0;
for(int i=0;i<n;i++){
   cin>>arr[i];
 if(i>0){
    if(arr[i]!=arr[i-1]){
       t1++;
    }
 }
 
  }
if(t1==0) {
   cout<<"NO"<<endl;
}else{
   cout<<"YES"<<endl;
   int j=-1;
for(int i=1;i<n;i++){
   if(arr[i]!=arr[0]){
      cout<<1<<" "<<i+1<<endl;
      if(j==-1){
         j=i;
      }
   }
}
for(int i=1;i<n;i++){
   if(arr[i]==arr[0]){
      cout<<i+1<<" "<<j+1<<endl;
      
   }
}
 
}
}
}