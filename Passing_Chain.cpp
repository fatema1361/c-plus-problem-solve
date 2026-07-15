#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,x;
    cin>>T;
    while(T--){
        int N,K;
        cin>>N>>K;
        int ans=1;
        while(ans+K<=N){
            ans+=K;
        }
        cout<<ans<<"\n";
        
    }
    return 0;
}