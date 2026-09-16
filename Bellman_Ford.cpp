#include<bits/stdc++.h>
using namespace std;
class Edge{
    public:
    int a,b,c;
    Edge(int a,int b,int c){
        this->a=a;
        this->b=b;
        this->c=c;
    }
};
int dis[1005];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,e;
    cin>>n>>e;
    vector<Edge>Edge_list;
    while(e--){
        int a,b,c;
        cin>>a>>b>>c;
        Edge_list.push_back(Edge(a,b,c));

    }
    for(int i=0;i<n;i++){
        for(auto ed:Edge_list){
            int a,b,c;
            a=ed.a;
            b=ed.b;
            c=ed.c;
            if(dis[a]!=INT_MAX&&dis[a]+c<dis[b]){
                dis[b]=dis[a]+c;
      
            }
        }
                   
    }
    return 0;
}