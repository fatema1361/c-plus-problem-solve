#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    long long psum[N];
    psum[0]=A[0];
    for(int i=1;i<N;i++){
        psum[i]=psum[i-1]+A[i];
    }
    reverse(psum,psum+N);
    for(int i=0;i<N;i++){
        cout<<psum[i]<<" ";
    }
    return 0;
}