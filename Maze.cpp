#include<bits/stdc++.h>
using namespace std;

int n,m,dx=-1,dy=-1;
char grid[1005][1005];
vector<pair<int,int>>d = {{0,1},{0,-1},{-1,0},{1,0}};
bool visited[1005][1005];
int level[1005][1005];
pair<int,int> par[1005][1005];
bool valid(int r,int c)
{
    if(r<0||r>=n||c<0||c>=m)
       return false;
    return true;
}

void BfS(int nr,int nc)
{
    queue<pair<int,int>>q;
    q.push({nr,nc});
    visited[nr][nc]=true;
    level[nr][nc]=0;
    par[nr][nc]={-1,-1};
    while(!q.empty())
    {
        pair<int,int>pa = q.front();
        q.pop();
        int parx = pa.first;
        int pary = pa.second;
        for(int i=0;i<4;i++)
        {
            int r = parx+d[i].first;
            int c = pary+d[i].second;
            if(valid(r,c) && !visited[r][c] && grid[r][c]!='#')
            {
                q.push({r,c});
                visited[r][c]=true;
                level[r][c]=level[parx][pary]+1;
                par[r][c]={parx,pary};
                if(valid(r,c)&&grid[r][c]=='D')
                {
                      dx=r;
                      dy=c;
                      return;
                }
            }
        }
    }
}

int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
        }
    }
    memset(visited,false,sizeof(visited));
    memset(level,-1,sizeof(level));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(!visited[i][j] && grid[i][j]=='R')
            {
                BfS(i,j);
            }
        }
    }

    
  if(dx!=-1 && dy!=-1){
    pair<int,int>p = par[dx][dy];
    while(grid[p.first][p.second]!='R')
    {
        int r=p.first;
        int c=p.second;
        grid[r][c]='X';
        p=par[r][c];
    }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<grid[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}