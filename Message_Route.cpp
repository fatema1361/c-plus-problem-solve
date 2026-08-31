#include<bits/stdc++.h>
using namespace std;
int main(){
    int v,e;
    cin>>v>>e;
    vector<vector<int>>graph(v+1);
    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    vector<bool>visited(v+1,false);
    vector<int>parent(v+1,-1);

    queue<int>q;
    visited[1]=true;
    q.push(1);
    while(!q.empty()){
        int child=q.front();
        q.pop();
        for(int next:graph[child]){
            if(!visited[next]){
            visited[next]=true;
            parent[next]=child;
            q.push(next);
          }
        
        }   

    }

    if(!visited[v]){
        cout<<"IMPOSSIBLE\n";
        return 0;
    }
    vector<int>path;
    int child=v;
    while(child!=-1){
        path.push_back(child);
        child=parent[child];
    }
    reverse(path.begin(),path.end());
    cout<<path.size()<<endl;
    for(int x:path){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}