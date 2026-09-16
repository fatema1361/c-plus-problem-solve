#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin>>T;
    while(T--){
        int N,M,cnt=0;
        cin>>N>>M;
        int A[N];
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        sort(A,A+N);
        for(int i=0;i<N;i++){
            if(A[i]!=A[i+1]){
                cnt++;
    
            }
        }
        cout<<M-cnt<<endl;
    }
    return 0;
}