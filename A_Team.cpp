#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int p,v,t;
        cin>>p>>v>>t;
        if(p==1&&v==1||p==1&&t==1||v==1&&t==1){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}