#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,K;
    cin>>N>>K;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    int X=0,Y=0;
    for(int i=0;i<K-1;i++){
        if(A[i]>A[K-1]){
            X++;
        }
    }
    for(int i=K;i<N;i++){
        if(A[i]<A[K-1]){
            Y++;
        }
    }
    cout<<X<<" "<<Y<<endl;


    return 0;
}