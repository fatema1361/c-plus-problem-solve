#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,max;
    cin>>N;
    long long A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    sort(A,A+N,greater<int>());
    max=A[0];
    cout<<max<<endl;
    return 0;
}