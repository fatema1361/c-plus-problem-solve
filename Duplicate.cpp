#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,flag=0;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];

    }
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(A[i]==A[j]){
                flag=1;
                break;
            }
        }
        if(flag){
            break;
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