#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,cnt=1;
    cin>>n;
    string x[n+1];
    for(int i=0;i<n;i++){
        cin>>x[i];
        
    }
    for(int i=1;i<n;i++){
        
        if(x[i]!=x[i-1]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}