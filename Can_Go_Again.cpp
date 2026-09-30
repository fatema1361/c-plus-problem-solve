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
long long dis[1005];
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
    int src;
    cin>>src;
    for(int i=0;i<=n;i++){
        dis[i]=LLONG_MAX;
    }
    dis[src]=0;
    for(int i=0;i<n-1;i++){
        for(auto ed:Edge_list){
            int a,b,c;
            a=ed.a;
            b=ed.b;
            c=ed.c;
            if(dis[a]!=LLONG_MAX&&dis[a]+c<dis[b]){
                dis[b]=dis[a]+c;
      
            }
        }
                   
    }
    bool negCycle=false;
    for(auto ed:Edge_list){
        int a,b,c;
            a=ed.a;
            b=ed.b;
            c=ed.c;
            if(dis[a]!=LLONG_MAX&&dis[a]+c<dis[b]){
                negCycle=true;
                break;
      
            }
    }
    int t;
    cin>>t;
    if(negCycle){
        cout<<"Negative Cycle Detected"<<endl;
        return 0;
    }
    while(t--){
        int des;
        cin>>des;
        if(dis[des]==LLONG_MAX){
            cout<<"Not Possible"<<endl;
        }
        else{
            cout<<dis[des]<<endl;
        }
    }
    return 0;
}