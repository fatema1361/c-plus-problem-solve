#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N,ans=0;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        if(N%2!=0){
            cout<<'0'<<endl;
            continue;
        }
        for(int i=0;i<N;i++){
            for(int j=i+1;j<N;j++){
                ans=ans+abs(A[i]-A[j]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}