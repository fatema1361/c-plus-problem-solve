#include<bits/stdc++.h>
using namespace std;
bool vis[1005];
vector<int>adj_list[1005];

void bfs(int src){
    queue<int>q;
    q.push(src);
    vis[src]=true;

    while(!q.empty()){
        int par=q.front();
        q.pop();
        for(int child:adj_list[par]){
            if(!vis[child]){
                q.push(child);
                vis[child]=true;
            }
        }

    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,e;
    cin>>n>>e;
    while(e--){
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);

    }
    memset(vis,false,sizeof(vis));
    int src,dst;
    cin>>src>>dst;
    bfs(src);
    if(vis[dst]){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}