#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,C,sum=0;
    cin>>N>>C;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
        sum=sum+A[i];

    }
    if(sum<=C){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}