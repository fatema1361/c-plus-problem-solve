#include<bits/stdc++.h>
using namespace std;
long long dis[1005][1005];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,e;
    cin>>n>>e;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j){
                dis[i][j]=0;
            }
            else{
                dis[i][j]=LLONG_MAX;
            }
        }

    }
    while(e--){
        int a,b,c;
        cin>>a>>b>>c;
        dis[a][b]=min(dis[a][b],(long long)c);

    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(dis[i][k]!=LLONG_MAX&&dis[k][j]!=LLONG_MAX){
                    dis[i][j]=min(dis[i][j],dis[i][k]+dis[k][j]);
                }
            }
        }
    }
    int q;
    cin>>q;
    while(q--){
        int src,des;
        cin>>src>>des;
        if(dis[src][des]==LLONG_MAX){
            cout<<-1<<endl;
        }
        else{
            cout<<dis[src][des]<<endl;
        }
    }
    
    return 0;
}