
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i;
    int x[n];
    for(i=0;i<n;++i){
        cin>>x[i];
    }
    for(i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++)
            if(max(x[i],x[i+1])<max(x[j],x[j+1]) && min(x[i],x[i+1])<min(x[j],x[j+1]) && max(x[i],x[i+1])>min(x[j],x[j+1])){
            cout<<"yes";
            return 0;
        }
    }
    cout<<"no";
    return 0;
}