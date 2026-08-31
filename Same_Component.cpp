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
    int Sx,Sy,Dx,Dy;
    cin>>Sx>>Sy;
    cin>>Dx>>Dy;
    if(grid[Sx][Sy]=='-'||grid[Dx][Dy]=='-'){
        cout<<"NO"<<endl;
        return 0;
    }
    
    queue<pair<int,int>>q;
    q.push({Sx,Sy});
    visited[Sx][Sy]=true;
    int Dr[]={-1,1,0,0};
    int Dc[]={0,0,-1,1};

    while(!q.empty()){
        int r=q.front().first;
        int c=q.front().second;
        q.pop();
        if(r==Dx&&c==Dy){
            cout<<"YES"<<endl;
            return 0;
        }
        for(int i=0;i<4;i++){
            int Nr=r+Dr[i];
            int Nc=c+Dc[i];

            if(Nr<0||Nr>=N||Nc<0||Nc>=M){
                continue;
            }
            if(grid[Nr][Nc]=='-'){
                continue;
            }
            if(visited[Nr][Nc]){
                continue;
            }
            visited[Nr][Nc]=true;
            q.push({Nr,Nc});
        }
    }
    cout<<"NO"<<endl;
    return 0;
}