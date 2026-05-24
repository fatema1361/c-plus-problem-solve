#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,X;
    cin>>N>>X;
    int A[N],flag=0;
    for(int i=0;i<N;i++){
        cin>>A[i];
        if(A[i]==X){
            flag=1;
        }
    }
    if(flag==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}