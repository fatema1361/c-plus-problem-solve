#include<bits/stdc++.h>
using namespace std;
long long* sort_it(int N){
     long long*A=new long long[N];
     for(int i=0;i<N;i++){
        cin>>A[i];
     }
    sort(A,A+N,greater<long long>());
    return A;
}

int main(){
    int N;
    cin>>N;
    long long*A= sort_it(N);
    for(int i=0;i<N;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    delete[]A;
    return 0;
}