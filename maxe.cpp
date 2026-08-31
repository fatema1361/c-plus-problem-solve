#include<bits/stdc++.h>
using namespace std;

    int N,M;
    char grid[1005][1005];
    bool visited[1005][1005];
    vector<pair<int,int>>d={
        {0,1},{0,-1},{-1,0},{1,0}
    };
    pair<int,int>par[1005][1005];
     bool valid(int i,int j){
        if(i>=0&&i<N&&j>=0&&j<M){
          return false;

        }
        return true;
                
    }
    bool BFS(int r,int c){
        queue<pair<int,int>>q;
        q.push({r,c})
        visited[r][c]=true;
        par[r][c]={-1,-1};
            while(!q.empty()){
                auto[]
            }
           
            if(maze[nr][nc]!='.' && maze[nr][nc]!='D'){
                continue;
            }
            if(visited[nr][nc]){
                continue;
            }
            if(maze[nr][nc]=='D'){
                return true;
            }
            maze[nr][nc]='X';
            
            
            if(dfs(nr,nc)) {
                return true;
            }
            
            maze[nr][nc]='.';
              
        
        }
        return false;
    }
int main(){
    cin>>N>>M;
    int sr=-1,sc=-1;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>grid[i][j];
            if(grid[i][j]=='R'){
                sr=i;
                sc=j;
            }
        }
    }
    memset(visited,false,sizeof(visited));
    //memset(level,false,sizeof(level));
    if(sr!=-1){
        BFS(sr,sc);
    }
    // for(int i=0;i<N;i++){
    //     for(int j=0;j<M;j++){
    //         if(!visited[i][j]&&grid[i][j]=='R'){
    //             dfs(sr,sc);
    //         }
    //     }
        
    // }
    
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cout<<grid[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}