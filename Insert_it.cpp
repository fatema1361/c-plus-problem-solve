#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,M;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    cin>>M;
    int B[M];
    for(int i=0;i<M;i++){
        cin>>B[i];
    }
    int X;
    cin>>X;
    for(int i=0;i<X;i++){
        cout<<A[i]<<" ";
    }
    for(int i=0;i<M;i++){
        cout<<B[i]<<" ";
    }
    for(int i=X;i<N;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}