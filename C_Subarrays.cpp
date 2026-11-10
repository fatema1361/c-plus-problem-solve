#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>pre(n+1,0);
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            pre[i]=(pre[i-1]+x)%k;
        }
        vector<int>freq(k,0);
        long long ans=0;
        for(int r=0;r<=n;r++){
            if(r-k-1>=0){
                freq[pre[r-k-1]]++;
            }
            ans+=freq[pre[r]];
        }
        cout<<ans<<endl;
    }
    return 0;
}