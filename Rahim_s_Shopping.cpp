#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,K;
    cin>>N>>K;
    int A[N],ans[N],mx=-1;
    for(int i=0;i<N;i++){
        cin>>A[i];
        if(A[i]<K){

        }
    }
    for(int i=0;i<N;i++){
        if(A[i]<=K){
          mx=max(mx,A[i]);
          
           
        }


    }
    
        cout<<mx<<endl;
    



    return 0;
}