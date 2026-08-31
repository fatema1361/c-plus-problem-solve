#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,M;
    cin>>N>>M;
    char grid[1005][1005];
    bool visited[1005][1005]={};
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>grid[i][j];
        }
    }
    int mn=INT_MAX;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(grid[i][j]=='.'&&!visited[i][j]){
                int area=0;
                queue<pair<int,int>>q;
                q.push({i,j});
                visited[i][j]=true;
                int Dr[]={-1,1,0,0};
                int Dc[]={0,0,-1,1};
                while(!q.empty()){
                    int r=q.front().first;
                    int c=q.front().second;
                    q.pop();
                    area++;
                    for(int k=0;k<4;k++){
                        int nr=r+Dr[k];
                        int nc=c+Dc[k];
                        if(nr<0||nr>=N||nc<0||nc>=M){
                            continue;
                        }
                        if(grid[nr][nc]=='-'){
                            continue;
                        }
                        if(visited[nr][nc]){
                            continue;
                        }
                        visited[nr][nc]=true;
                        q.push({nr,nc});
                    }
                }
                mn=min(mn,area);
            }
        }
    }
    if(mn==INT_MAX){
        cout<<-1<<endl;
    }
    else{
        cout<<mn<<endl;
    }
    return 0;
}