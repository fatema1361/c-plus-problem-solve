#include<bits/stdc++.h>
using namespace std;
int parent[1005];
int sz[1005];

int find(int x){
    if(parent[x]==x){
        return x;
    }
    return parent[x]=find(parent[x]);
}
void Union(int a,int b){
    a=find(a);
    b=find(b);
    if(a==b){
        return;
    }
    if(sz[a]<sz[b]){
        swap(a,b);
    }
    parent[b]=a;
    sz[a]+=sz[b];
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,e;
    cin>>n>>e;
    for(int i=1;i<=n;i++){
        parent[i]=i;
        sz[i]=1;
    }
    int ans=0;
    while(e--){
        int u,v;
        cin>>u>>v;
        if(find(u)==find(v)){
            ans++;
        }
        else{
            Union(u,v);
        }
    }
    cout<<ans<<endl;
    return 0;
}