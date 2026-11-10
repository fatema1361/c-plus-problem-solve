#include<bits/stdc++.h>
using namespace std;
int weight[105],val[1005];
int dp[1005][1005];
int knapsack(int i,int mx_weight){
    if(i<0||mx_weight<=0){
        return 0;
    }
    if(dp[i][mx_weight]!=-1){
        return dp[i][mx_weight];
    }
    if(weight[i]<=mx_weight){
        int op1=knapsack(i-1,mx_weight-weight[i])+val[i];
        int op2=knapsack(i-1,mx_weight);
        dp[i][mx_weight]=max(op1,op2);
        return dp[i][mx_weight];
    }
    else{
        return knapsack(i-1,mx_weight);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,mx_weight;
    cin>>N>>mx_weight;
    for(int i=0;i<N;i++){
       cin>>weight[i]>>val[i];
    }
    memset(dp,-1,sizeof(dp));
    int ans=knapsack(N-1,mx_weight);
    cout<<ans<<endl;
    return 0;
}