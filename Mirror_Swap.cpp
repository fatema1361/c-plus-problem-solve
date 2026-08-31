#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N,sum=0;
        cin>>N;
        int A[2*N];
        for(int i=0;i<2*N;i++){
            cin>>A[i];
            
        }
        
        for(int i=0;i<N;i++){
            int mirror=2*N-1-i;
            sum+=max(A[i],A[mirror]);
        }
        cout<<sum<<endl;

    }
    return 0;
}