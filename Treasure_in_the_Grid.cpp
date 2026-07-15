#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,M,Q;
    cin>>N>>M>>Q;
    int A[N][M];
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>A[i][j];
        }
    }
    while(Q--){
         int x1,x2,y1,y2;
        cin>>x1>>y1;
        cin>>x1>>y2;
        int sum=0;
        for(int i=x1;i<=x2;i++){
        for(int j=y1;j<=y2;j++){
            sum+=A[i][j];
        }
      }
         cout<<sum<<endl;
    }
    
    
    

    return 0;
}