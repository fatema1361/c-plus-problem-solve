#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int Q,N;
    cin>>N>>Q;
    vector<int>A(N);
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    
    while(Q--){
        int X;
        cin>>X;
    auto it=find(A.begin(),A.end(),X);
    if(it==A.end()){
        cout<<"not found"<<endl;
    }
    else{
        cout<<"found"<<endl;
    }
}
    return 0;
}