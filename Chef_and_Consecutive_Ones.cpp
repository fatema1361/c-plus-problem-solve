#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    int mx=0,count=0;
    for(int i=0;i<N;i++){
        if(A[i]==1){
            count++;
            mx=max(mx,count);
        }
        else{
            count=0;
        }
    }
    cout<<mx<<endl;
    return 0;
}