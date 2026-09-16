#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++){
            cin>>A[i];

        }
        int cut=A[0],cnt=0;
        for(int i=0;i<N;i++){
           if(cut<=A[i]){
            cnt++;
           } 

        }
        cout<<cnt<<endl;
    }
    return 0;
}