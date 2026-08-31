#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,e;
    cin>>n>>e;
    vector<vector<int>>adj(n);
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);//undirected graph
    }
    for(int i=0;i<n;i++){
        cout<<i<<"->";
        for(int g:adj[i]){
            cout<<g<<" ";
        }
        cout<<endl;
    }
    return 0;
}