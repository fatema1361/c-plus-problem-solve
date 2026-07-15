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
        for(int i=0;i<N-1;i++){
            int h=min(A[i],A[i+1]);
            if(h>ans){
                ans=h;
            }
        }
       
        cout<<ans<<endl;
    }
    return 0;
}