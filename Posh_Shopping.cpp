#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N,mx=0;
        cin>>N;
        int C[N];
        for(int i=0;i<N;i++){
            cin>>C[i];
        }
        for(int i=0;i<N;i++){
            mx=max(mx,C[i]);
            for(int j=i+1;j<N;j++){
               if(C[i]<=C[j]){
                mx=max(mx,C[i]+C[j]);
               }
            }
        }
        cout<<mx<<endl;

    }
    return 0;
}