#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int N,K;
        cin>>N>>K;
        if(N<K){
            cout<<N<<endl;
        }
        else{
            int d=(N-1)/(K-1);
            cout<<N+d<<endl;
        }
    }
    return 0;
}