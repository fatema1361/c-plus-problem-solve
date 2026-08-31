#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N,K;
        cin>>N>>K;
        int A[N];
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        for(int i=0;i<N;i++){
            for(int j=i;j>0;j--){
                if(A[j]+A[j-1]<=K&&A[j]<A[j-1]){
                    swap(A[j],A[j-1]);
                }
                else{
                    break;
                }
            }
        }
        for(int i=0;i<N;i++){
            cout<<A[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
