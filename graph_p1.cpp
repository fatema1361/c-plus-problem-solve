#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>>graph(n,vector<int>(n,0));

    graph[0][1]=1;
    graph[1][0]=1;
    graph[0][2]=1;
    graph[2][0]=1;
    graph[1][3]=1;
    graph[3][1]=1;
    return 0;
}
