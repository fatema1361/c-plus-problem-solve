#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++){
            cin>>A[i];
            
        }
        int mx=0;
        for(int i=0;i<N;i++){
            int cnt=0;
            for(int j=0;j<N;j++){
                if(A[j]-j==A[i]-i){
                    cnt++;
                }
            }
            mx=max(mx,cnt);
        }
        cout<<N-mx<<endl;
    }
    return 0;
}