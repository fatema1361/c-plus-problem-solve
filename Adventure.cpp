#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,w;
        cin>>n>>w;
        int weight[n];
        int value[n];
        for(int i=0;i<n;i++){
            cin>>weight[i];
        }
        for(int i=0;i<n;i++){
            cin>>value[i];
        }
        int dp[w+1]={0};
        for(int i=0;i<n;i++){
            for(int j=w;j>=weight[i];j--){
                dp[j]=max(dp[j],dp[j-weight[i]]+value[i]);
            }
        }
        cout<<dp[w]<<endl;
    }
    return 0;
}