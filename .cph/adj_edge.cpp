#include<bits/stdc++.h>
using namespace std;
class edge{
    public:
    int to;
    int weight;
    edge(int to,int weight){
        this->to=to;
        this->weight=weight;
    }

};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,e;
    cin>>n>>e;
    vector<vector<edge>>adj(n);
    for(int i=0;i<e;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back(edge(v,w));
        adj[v].push_back(edge(u,w));
    }
    for(int i=0;i<n;i++){
        cout<<i<<"->";
        for(edge Edge:adj[i]){
            cout<<"("<<Edge.to<<","<<Edge.weight<<")";
        }
        cout<<endl;
    }
    return 0;
}