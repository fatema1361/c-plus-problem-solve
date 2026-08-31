#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int N,M;
        cin>>N>>M;
        int kx,ky;
        cin>>kx>>ky;
        int qx,qy;
        cin>>qx>>qy;
        char dt[1005][1005]={};
        bool visited[1005][1005]={};
            queue<pair<int,int>>q;
            q.push({kx,ky});
            visited[kx][ky]=true;
                int Dr[]={-2,-2,-1,-1,1,1,2,2};
                int Dc[]={-1,1,-2,2,-2,2,-1,1};
                int ans=-1;
                while(!q.empty()){
                    int r=q.front().first;
                    int c=q.front().second;
                    q.pop();
                    
                        if(r==qx&&c==qy){

                            ans=dt[r][c];
                            break;
                        }
                        for(int i=0;i<8;i++){
                            int nr=r+Dr[i];
                            int nc=c+Dc[i];
                        
                            if(nr<0||nr>=N||nc<0||nc>=M){
                                continue;
                            }
                            if(visited[nr][nc]){
                                continue;
                            }
                            visited[nr][nc]=true;
                            dt[nr][nc]=dt[r][c]+1;
                            q.push({nr,nc});
                        }
                        
                }
                cout<<ans<<endl;
    }
    
    return 0;
}